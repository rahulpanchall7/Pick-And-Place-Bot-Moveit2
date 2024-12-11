from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from moveit_configs_utils import MoveItConfigsBuilder
import os
from ament_index_python.packages import get_package_share_directory
from launch_ros.actions import Node


def generate_launch_description():
    # Declare a launch argument to specify if the simulation is being used
    is_sim_arg = DeclareLaunchArgument(
        "is_sim",
        default_value="True"
    )

    # Load the value of the "is_sim" argument as a launch configuration
    is_sim = LaunchConfiguration("is_sim")

    # Initialize the MoveIt configuration for the "pickbot" robot
    moveit_config = (
        MoveItConfigsBuilder("pickbot", package_name="pickbot_moveit")  # Set the robot name and package
        .robot_description(file_path=os.path.join(get_package_share_directory("pickbot_description"), "urdf", "pickbot.urdf.xacro"))  
        # Load the robot description (URDF file) from the specified path

        .robot_description_semantic(file_path="config/pickbot.srdf")  
        # Load the semantic robot description (SRDF file)

        .trajectory_execution(file_path="config/moveit_controllers.yaml")  
        # Load trajectory execution settings from the controllers configuration file

        .to_moveit_configs()  # Convert to a MoveItConfigs object
    )

    # Define the Move Group node for motion planning and execution
    move_group_node = Node(
        package="moveit_ros_move_group",  # Package containing the move_group executable
        executable="move_group",  # Launch the Move Group node
        output="screen",  # Output logs to the screen
        parameters=[
            moveit_config.to_dict(),  # Pass MoveIt configuration parameters
            {"use_sim_time": is_sim},  # Use simulation time if "is_sim" is True
            {"publish_robot_description_semantic": True}  # Publish the semantic description for debugging
        ],
        arguments=["--ros-args", "--log-level", "info"]  # Set log level to "info"
    )

    # Path to the RViz configuration file
    rviz_config = os.path.join(get_package_share_directory("pickbot_moveit"), "config", "moveit.rviz")

    # Define the RViz node to visualize the robot and planning process
    rviz_node = Node(
        package="rviz2",  # RViz2 package
        executable="rviz2",  # Launch the RViz2 executable
        name="rviz2",  # Name the node "rviz2"
        output="log",  # Output logs to the screen
        arguments=["-d", rviz_config],  # Load the specified RViz configuration file
        parameters=[
            moveit_config.robot_description,  # Load the robot description
            moveit_config.robot_description_semantic,  # Load the semantic description
            moveit_config.robot_description_kinematics,  # Load kinematic settings
            moveit_config.joint_limits,  # Load joint limits
        ],
    )
    
    # Return the launch description containing the declared argument and nodes to launch
    return LaunchDescription([
        is_sim_arg,        # Add the simulation argument
        move_group_node,   # Launch the Move Group node
        rviz_node          # Launch the RViz node
    ])
