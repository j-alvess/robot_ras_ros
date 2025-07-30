#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <thread>
#include <chrono>
#include "count_interfaces/action/count.hpp"

using Count = count_interfaces::action::Count;

class CountServer : public rclcpp::Node {
public:
  CountServer()
  : Node("count_server") {
    action_server_ = rclcpp_action::create_server<Count>(
      this,
      "count",
      std::bind(&CountServer::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
      std::bind(&CountServer::handle_cancel, this, std::placeholders::_1),
      std::bind(&CountServer::handle_accepted, this, std::placeholders::_1)
    );
  }

private:
  rclcpp_action::Server<Count>::SharedPtr action_server_;

  rclcpp_action::GoalResponse handle_goal(
    const rclcpp_action::GoalUUID &, 
    std::shared_ptr<const Count::Goal> goal) {
    RCLCPP_INFO(get_logger(), "Goal recebido: %d", goal->limit);
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  rclcpp_action::CancelResponse handle_cancel(
    const std::shared_ptr<rclcpp_action::ServerGoalHandle<Count>> &) {
    return rclcpp_action::CancelResponse::ACCEPT;
  }

  void handle_accepted(
    const std::shared_ptr<rclcpp_action::ServerGoalHandle<Count>> goal_handle) {
    std::thread([this, goal_handle]() {
      auto feedback = std::make_shared<Count::Feedback>();
      auto result = std::make_shared<Count::Result>();

      for (int32_t i = 1; i <= goal_handle->get_goal()->limit; ++i) {
        // Simple assignment for scalar int
        feedback->current = i;
        
        goal_handle->publish_feedback(feedback);
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
      }

      // Simple assignment for scalar int
      result->total = goal_handle->get_goal()->limit * 
                      (goal_handle->get_goal()->limit + 1) / 2;
      
      goal_handle->succeed(result);
    }).detach();
  }
};

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<CountServer>());
  rclcpp::shutdown();
  return 0;
}