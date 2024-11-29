#include <std_msgs/msg/string.hpp>
#include <rclcpp/rclcpp.hpp>

using namespace std::chrono_literals;

class SimplePublisher : public rclcpp::Node
{
public:
    SimplePublisher() : Node("simple_publisher"), count_(0)
    {
        // Create a publisher on the "chatter" topic
        publisher_ = this->create_publisher<std_msgs::msg::String>("chatter", 10);

        // Create a timer to periodically publish messages
        timer_ = this->create_wall_timer(
            500ms, std::bind(&SimplePublisher::publish_message, this));
    }

private:
    void publish_message()
    {
        // Create the message to send
        auto message = std_msgs::msg::String();
        message.data = "Hello, ROS 2! Count: " + std::to_string(count_++);
        
        // Log the message to the console
        RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());

        // Publish the message
        publisher_->publish(message);
    }

    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    size_t count_;
};

int main(int argc, char *argv[])
{
    // Initialize the ROS 2 system
    rclcpp::init(argc, argv);

    // Create and spin the SimpleTalker node
    rclcpp::spin(std::make_shared<SimplePublisher>());

    // Shutdown the ROS 2 system
    rclcpp::shutdown();
    return 0;
}
