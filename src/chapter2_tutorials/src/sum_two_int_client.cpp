 #include "ros/ros.h"
 #include "chapter2_tutorials/AddTwoInt.h"
 #include <cstdlib>
 
 int main(int argc, char **argv)
 {
   ros::init(argc, argv, "sum_two_int_client");
   if (argc != 3)
   {
     ROS_INFO("usage: sum_two_int_client X Y");
     return 1;
   }
 
   ros::NodeHandle n;
   ros::ServiceClient client = n.serviceClient<chapter2_tutorials::AddTwoInt>("AddTwoInt");
   chapter2_tutorials::AddTwoInt srv;
   srv.request.a = atoll(argv[1]);
   srv.request.b = atoll(argv[2]);
   if (client.call(srv))
   {
     ROS_INFO("Sum: %ld", (long int)srv.response.sum);
   }
   else
   {
     ROS_ERROR("Failed to call service AddTwoInt");
     return 1;
   }
 
   return 0;
 }
