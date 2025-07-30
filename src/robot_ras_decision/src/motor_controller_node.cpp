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
        "/movement", 10, std::bind(&MotorControllerNode::movement_values, this, std::placeholders::_1));

        pub_motor1 = this->create_publisher<std_msgs::msg::Float64MultiArray>("/motor1/commands", 10);
        pub_motor2 = this->create_publisher<std_msgs::msg::Float64MultiArray>("/motor2/commands", 10);

        this -> declare_parameter <double>("velocidadeLinear", 1) ; 
        this -> get_parameter ("velocidadeLinear", velocidadeLinear) ;

        srv_velocity_ = this->create_service<robot_ras_decision::srv::SetVelocity>(
          "mudar_velocidade", std::bind(&MotorControllerNode::setVelocity, this, std::placeholders::_1, std::placeholders::_2));

        timer_ = this->create_wall_timer(std::chrono::milliseconds(100), std::bind(&MotorControllerNode::movement_callback, this));

          direcao = "";
          angulo = 0.0;
          distancia = 0.0;
          tempoInicial = this->get_clock()->now();
      }

      void movement_values(const robot_ras_decision::msg::Movement::SharedPtr movimento) {
        direcao = movimento->direcao;
        angulo = movimento->angulo;
        distancia = movimento->distancia;
      }

      void movement_callback()
      {
        
        float vel1 = 0, vel2 = 0, tempoExec;
        rclcpp::Time tempoAtual = this->get_clock()->now();

        float velocidadeAngular = 2 * velocidadeLinear;

        float tempoDecorrido = (tempoAtual - tempoInicial).seconds();

        
        if(direcao == "front") {
          tempoExec = distancia/velocidadeLinear;
          if(tempoDecorrido < tempoExec) {
            vel1 = velocidadeLinear;
            vel2 = vel1;
          } else if (tempoDecorrido > tempoExec) {
            vel1 = 0;
            vel2 = 0;
            tempoInicial = tempoAtual;
            direcao = "";
          }
        } else if(direcao == "rear") {
          tempoExec = distancia/velocidadeLinear;
          if(tempoDecorrido < tempoExec) {
            vel1 = -velocidadeLinear;
            vel2 = vel1;
          } else if (tempoDecorrido > tempoExec) {
            vel1 = 0;
            vel2 = 0;
            tempoInicial = tempoAtual;
            direcao = "";
          }
        } else if(direcao == "left") {
          tempoExec = angulo/velocidadeAngular;
          if(tempoDecorrido < tempoExec) {
            vel1 = -velocidadeLinear / 2;
            vel2 = velocidadeLinear / 2;
          } else if (tempoDecorrido > tempoExec) {
            vel1 = 0;
            vel2 = 0;
            tempoInicial = tempoAtual;
            direcao = "";
          }
          tempoInicial = tempoAtual;
        } else if(direcao == "right") {
          tempoExec = -angulo/velocidadeAngular;
          if(tempoDecorrido < tempoExec) {
            vel1 = velocidadeLinear / 2;
            vel2 = -velocidadeLinear / 2;
          } else if (tempoDecorrido > tempoExec) {
            vel1 = 0;
            vel2 = 0;
            tempoInicial = tempoAtual;
            direcao = "";
          }
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
                velocidadeLinear = request->linear_velocity;
                response->sucesso = 1;
              }
          
      }
    
    private:
      std::string direcao;
      float angulo;
      float distancia;
      rclcpp::Time tempoInicial;
      double velocidadeLinear;
      rclcpp::Subscription<robot_ras_decision::msg::Movement>::SharedPtr sub_movement_;
      rclcpp::Publisher<std_msgs::msg::Float64MultiArray>::SharedPtr pub_motor1;
      rclcpp::Publisher<std_msgs::msg::Float64MultiArray>::SharedPtr pub_motor2;
      rclcpp::TimerBase::SharedPtr timer_; 
      rclcpp::Service<robot_ras_decision::srv::SetVelocity>::SharedPtr srv_velocity_; 

  };

  int main(int argc, char ** argv)
  {
    rclcpp::init(argc, argv);


    rclcpp::spin(std::make_shared<MotorControllerNode>());
    rclcpp::shutdown();
    return 0;
  }
