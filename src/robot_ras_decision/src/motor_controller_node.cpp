  #include <cstdio>
  #include <memory>
  #include <string>
  #include <chrono>

  #include "rclcpp/rclcpp.hpp"
  #include <std_msgs/msg/float64_multi_array.hpp>
  #include <std_msgs/msg/float32.hpp>
  #include <std_msgs/msg/string.hpp>
  #include "robot_ras_decision/msg/movement.hpp"
  #include "robot_ras_decision/srv/set_velocity.hpp"

  class MotorControllerNode : public rclcpp::Node 
  {
    public: 
      MotorControllerNode() : Node ("movement_control")
      {
        sub_movement_ = this->create_subscription<robot_ras_decision::msg::Movement>(
        "/movement", 10, std::bind(&MotorControllerNode::movement_callback, this, std::placeholders::_1));

        pub_motor1 = this->create_publisher<std_msgs::msg::Float64MultiArray>("/motor1/commands", 10);
        pub_motor2 = this->create_publisher<std_msgs::msg::Float64MultiArray>("/motor2/commands", 10);

        this -> declare_parameter <double>("velocidade_linear", 0.2) ; 
        this -> get_parameter ("velocidade_linear", velocidade_linear_ ) ;

        srv_velocity_ = this->create_service<robot_ras_decision::srv::SetVelocity>(
          "mudar_velocidade", std::bind(&MotorControllerNode::setVelocity, this, std::placeholders::_1, std::placeholders::_2));

      }

      void movement_callback(const robot_ras_decision::msg::Movement::SharedPtr movimento)
      {
        std::string direcao = movimento->direcao;
        float vel1, vel2;


        
        if(direcao == "front") {
          vel1 = velocidade_linear_;
          vel2 = vel1;
        } else if(direcao == "rear") {
          vel1 = -velocidade_linear_;
          vel2 = vel1;
        } else if(direcao == "left") {
          vel1 = -velocidade_linear_;
          vel2 = velocidade_linear_;
        } else if(direcao == "right") {
          vel1 = velocidade_linear_;
          vel2 = -velocidade_linear_;
        } 

        std_msgs::msg::Float64MultiArray motor1, motor2;

        motor1.data.resize(1);
        motor2.data.resize(1);

        motor1.data[0] = vel1;
        motor2.data[0] = vel2;

        pub_motor1->publish(motor1);
        pub_motor2->publish(motor2);
        
      }

      void setVelocity(const std::shared_ptr<robot_ras_decision::srv::SetVelocity::Request> &request,
            std::shared_ptr<robot_ras_decision::srv::SetVelocity::Response>      response) {

              if(request->linear_velocity >= 0) {
                velocidade_linear_ = request->linear_velocity;
                response->sucesso = 1;
              }
          
      }
    
    private:
      double velocidade_linear_;
      rclcpp::Subscription<robot_ras_decision::msg::Movement>::SharedPtr sub_movement_;
      rclcpp::Publisher<std_msgs::msg::Float64MultiArray>::SharedPtr pub_motor1;
      rclcpp::Publisher<std_msgs::msg::Float64MultiArray>::SharedPtr pub_motor2;
      rclcpp::TimerBase::SharedPtr timer_;  // ADDED: Missing declaration
      rclcpp::Service<robot_ras_decision::srv::SetVelocity>::SharedPtr srv_velocity_; 

  };

  int main(int argc, char ** argv)
  {
    rclcpp::init(argc, argv);


    rclcpp::spin(std::make_shared<MotorControllerNode>());
    rclcpp::shutdown();
    return 0;
  }
