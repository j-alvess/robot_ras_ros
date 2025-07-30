#include <cstdio>
#include <chrono>
#include <memory>
#include <string>
#include <functional>


#include "rclcpp/rclcpp.hpp"
#include <std_msgs/msg/float64_multi_array.hpp>
#include <std_msgs/msg/string.hpp>
#include <sensor_msgs/msg/range.hpp>
#include "robot_ras_decision/msg/movement.hpp"

using namespace std::chrono_literals;

class DecisionNode : public rclcpp::Node 
{
    private:
        sensor_msgs::msg::Range distancia[4];
        rclcpp::Subscription<sensor_msgs::msg::Range>::SharedPtr sub_front_manager_;
        rclcpp::Subscription<sensor_msgs::msg::Range>::SharedPtr sub_rear_manager_;
        rclcpp::Subscription<sensor_msgs::msg::Range>::SharedPtr sub_left_manager_;
        rclcpp::Subscription<sensor_msgs::msg::Range>::SharedPtr sub_right_manager_;
        rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub_manager_;
        rclcpp::TimerBase::SharedPtr timer_;
        rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
        size_t count_;

    public:
        Manager() : Node ("decision") {
            
            sub_front_manager_ = this->create_subscription<sensor_msgs::msg::Range>(
            "sensor_range/front", 10, std::bind(&DecisionNode::sub_front_callback, this, std::placeholders::_1));
            sub_rear_manager_ = this->create_subscription<sensor_msgs::msg::Range>(
            "sensor_range/rear", 10, std::bind(&DecisionNode::sub_rear_callback, this, std::placeholders::_1));
            sub_left_manager_ = this->create_subscription<sensor_msgs::msg::Range>(
            "sensor_range/left", 10, std::bind(&DecisionNode::sub_left_callback, this, std::placeholders::_1));
            sub_right_manager_ = this->create_subscription<sensor_msgs::msg::Range>(
            "sensor_range/right", 10, std::bind(&DecisionNode::sub_right_callback, this, std::placeholders::_1));

            pub_manager_ = this->create_publisher<std_msgs::msg::String>("/movement", 10);

            timer_ = this->create_wall_timer(0.1s, std::bind(&DecisionNode::movement_callback, this));
        }

        void sub_front_callback(const sensor_msgs::msg::Range & msg)
        {
            distancia[0] = msg;
        
        }

        void sub_rear_callback(const sensor_msgs::msg::Range & msg)
        {
            distancia[1] = msg;
        
        }

        void sub_left_callback(const sensor_msgs::msg::Range & msg)
        {
            distancia[2] = msg;
        
        }

        void sub_right_callback(const sensor_msgs::msg::Range & msg)
        {
            distancia[3] = msg;
        
        }


        void movement_callback()
        {   
            auto instruction = robot_ras_decision::msg::Movement();

            if(distancia[2].range> 0.3 && distancia[3].range> 0.15 && distancia[0].range > 0.6) {
                instruction.direcao = "front";
                instruction.distancia = distancia[0].range - 0.6;
            } else if(distancia[2].range< 0.15 && distancia[0].range > 0.15) {
                instruction.direcao = "right";
                instruction.distancia = distancia[3].range - 0.15;
            } else if(distancia[3].range< 0.1 && distancia[0].range > 0.15) {
                instruction.direcao = "left";
                instruction.distancia = distancia[2].range - 0.15;
            } else if(distancia[2].range> 0.3) {                    
                instruction.direcao = "left";
                instruction.distancia = distancia[2].range - 0.3;
            } else if(distancia[3].range> 0.3) {
                instruction.direcao = "rigth";
                instruction.distancia = distancia[3].range - 0.3;
            } else if (distancia[0].range < 0.1) {
                instruction.direcao = "rear";
                instruction.distancia = distancia[0].range - 0.4;
            }
            


            pub_manager_->publish(instruction);
        
        }



};
int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<DecisionNode>());
    rclcpp::shutdown();
    return 0;
}
