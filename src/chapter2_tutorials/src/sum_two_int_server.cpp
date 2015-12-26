 #include "ros/ros.h"
 #include "chapter2_tutorials/AddTwoInt.h"
 
 bool add(chapter2_tutorials::AddTwoInt::Request  &req,
          chapter2_tutorials::AddTwoInt::Response &res)
 {
   res.sum = req.a + req.b;
   ROS_INFO("request: x=%ld, y=%ld", (long int)req.a, (long int)req.b);
   ROS_INFO("sending back response: [%ld]", (long int)res.sum);
   return true;
 }
 
 int main(int argc, char **argv)
 {
   ros::init(argc, argv, "sum_two_ints_server");
   ros::NodeHandle n;
 
   ros::ServiceServer service = n.advertiseService("AddTwoInt", add);
   ROS_INFO("Ready to add two ints.");
   ros::spin();
 
   return 0;
 }
