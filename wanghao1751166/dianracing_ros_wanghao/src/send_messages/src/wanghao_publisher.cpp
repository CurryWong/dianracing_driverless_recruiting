#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>
int main(int argc, char **argv)
{ 
 ros::init(argc, argv, "wanghao_publisher");
 ros::NodeHandle n;
 ros::Publisher chatter_pub = n.advertise<std_msgs::String>("dianracing", 1000);
 ros::Rate loop_rate(10);
 int count = 1;
 int i,s[10000];
 int j=0;
 while (ros::ok())
  {std_msgs::String msg;
   i=count;
   j=0;
   while(i!=0){
     s[j]=i%2;
     i=i/2;
     j++;}
   std::stringstream ss;
   ss << "driverless gogogo! NO. " ;
   for(i=j-1;i>=0;i--){ss << s[i];}
   msg.data = ss.str();
   ROS_INFO("%s", msg.data.c_str());
   chatter_pub.publish(msg);
   ros::spinOnce();
   loop_rate.sleep();
   ++count;
   }
 return 0;
}
