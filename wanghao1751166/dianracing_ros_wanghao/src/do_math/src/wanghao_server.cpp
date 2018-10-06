#include "ros/ros.h"
#include "do_math/Suan.h"

bool add(do_math::Suan::Request  &req,
         do_math::Suan::Response &res)
{
  res.result = (req.a + req.b)*req.c;
  ROS_INFO("request: x=%ld, y=%ld, z=%ld", (long int)req.a, (long int)req.b, (long int)req.c);
  ROS_INFO("sending back response: [%ld]", (long int)res.result);
  return true;
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "wanghao_server");
  ros::NodeHandle n;

  ros::ServiceServer service = n.advertiseService("wanghao", add);
  ROS_INFO("Ready to do (a+b)*c.");
  ros::spin();

  return 0;
}
