#include <cstdio>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include <std_msgs/msg/float64_multi_array.hpp>
#include <std_msgs/msg/string.hpp>

class MotorControllerNode : public rclcpp::Node 
{
  public: 
    MovementControl() : Node ("movement_control")
    {
      sub_movement_ = this->create_subscription<robot_ras_decision::msg::Movement>(
      "/movement", 10, std::bind(&MotorControllerNode::movement_callback, this, std::placeholders::_1));

      pub_motor1 = this->create_publisher<std_msgs::msg::Float64MultiArray>("/motor1/commands", 10);
      pub_motor2 = this->create_publisher<std_msgs::msg::Float64MultiArray>("/motor2/commands", 10);

    }

    void movement_callback(const robot_ras_decision::msg::Movement & msg) const
    {
      std::string direcao = msg.direcao;
      float vel1, vel2;
      
      if(direcao == "front"){
        vel1 = 1.0;
        vel2 = 1.0;
      } else if(direcao == "rear"){
        vel1 = -2.0;
        vel2 = -2.0;
      } else if(direcao == "left"){
        vel1 = -2.0;
        vel2 = 2.0;
      } else if(direcao == "right"){
        vel1 = 2.0;
        vel2 = -2.0;
      }

      std_msgs::msg::Float64MultiArray motor1, motor2;

      motor1.data.resize(1);
      motor2.data.resize(1);

      motor1.data[0] = vel1;
      motor2.data[0] = vel2;

      pub_motor1->publish(motor1);
      pub_motor2->publish(motor2);
      
    }
  
  private:
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr sub_movement_;
    rclcpp::Publisher<std_msgs::msg::Float64MultiArray>::SharedPtr pub_motor1;
    rclcpp::Publisher<std_msgs::msg::Float64MultiArray>::SharedPtr pub_motor2;

};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MotorControllerNode>());
  rclcpp::shutdown();
  return 0;
}
