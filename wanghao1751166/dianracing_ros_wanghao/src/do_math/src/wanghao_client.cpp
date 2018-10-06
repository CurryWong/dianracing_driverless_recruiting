#include "ros/ros.h"
#include "do_math/Suan.h"
#include <cstdlib>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "wanghao_client");
  if (argc != 4)
  {
    ROS_INFO("usage: wanghao_client X Y Z");
    return 1;
  }

  ros::NodeHandle n;
  ros::ServiceClient client = n.serviceClient<do_math::Suan>("wanghao");
  do_math::Suan srv;
  srv.request.a = atoll(argv[1]);
  srv.request.b = atoll(argv[2]);
  srv.request.c = atoll(argv[3]);
  if (client.call(srv))
  {
    ROS_INFO("result: %ld", (long int)srv.response.result);
  }
  else
  {
    ROS_ERROR("Failed to call service wanghao");
    return 1;
  }

  return 0;
}
