#include <std_msgs/std_msgs/msg/string.h>
#include <rclcpp/rclcpp/rclcpp.hpp>

class SimpleListener : public rclcpp::Node
{
public:
    SimpleListener() : Node("simple_listener")
    {
        // Create a subscription to the "chatter" topic
        subscription_ = this->create_subscription<std_msgs::msg::String>(
            "chatter", 10, std::bind(&SimpleListener::handle_message, this, std::placeholders::_1));
    }

private:
    // Callback function to handle incoming messages
    void handle_message(const std_msgs::msg::String::SharedPtr msg)
    {
        // Log the received message
        RCLCPP_INFO(this->get_logger(), "I heard: '%s'", msg->data.c_str());
    }

    // Subscription object
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
};

int main(int argc, char *argv[])
{
    // Initialize ROS 2 system
    rclcpp::init(argc, argv);

    // Create and spin the SimpleListener node to process incoming messages
    rclcpp::spin(std::make_shared<SimpleListener>());

    // Shutdown ROS 2 system after spinning the node
    rclcpp::shutdown();
    return 0;
}
