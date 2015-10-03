#include "ros/ros.h"
#include "beginner_tutorials/srv1.h"

bool add(beginner_tutorials::srv1::Request  &req,
         beginner_tutorials::srv1::Response &res)
{
  res.sum = req.A + req.B + req.C ;
  ROS_INFO("request: A=%ld, B=%ld, C=%ld ",(long int)req.A, (long int)req.B, (long int)req.C);
  ROS_INFO("sending back response: [%ld]", (long int)res.sum);
  return true;
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "add_3_ints_server");
  ros::NodeHandle n;

  ros::ServiceServer service = n.advertiseService("add_3_ints", add);
  ROS_INFO("Ready to add 3 ints.");
  ros::spin();

  return 0;
}