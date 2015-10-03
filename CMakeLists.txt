cmake_minimum_required(VERSION 2.8.3)
project(beginner_tutorials)

## Find catkin and any catkin packages
find_package(catkin REQUIRED COMPONENTS 
	roscpp 
	rospy 
	std_msgs 
	genmsg 
	message_generation)

#make message,service and generate -Alyson-2015.09.30 ++
## Declare ROS messages and services
add_message_files(FILES msg1.msg)
add_service_files(FILES srv1.srv)

## Generate added messages and services
generate_messages(DEPENDENCIES std_msgs)
#make message,service and generate -Alyson-2015.09.30 --

## Declare a catkin package
catkin_package()

## Build talker and listener
include_directories(include ${catkin_INCLUDE_DIRS})

add_executable(talker src/talker.cpp)
target_link_libraries(talker ${catkin_LIBRARIES})
add_dependencies(talker beginner_tutorials_generate_messages_cpp)

add_executable(listener src/listener.cpp)
target_link_libraries(listener ${catkin_LIBRARIES})
add_dependencies(listener beginner_tutorials_generate_messages_cpp)

add_executable(add_3_ints_server src/add_3_ints_server.cpp)
target_link_libraries(add_3_ints_server ${catkin_LIBRARIES})
add_dependencies(add_3_ints_server beginner_tutorials_gencpp)

add_executable(add_3_ints_client src/add_3_ints_client.cpp)
target_link_libraries(add_3_ints_client ${catkin_LIBRARIES})
add_dependencies(add_3_ints_client beginner_tutorials_gencpp)