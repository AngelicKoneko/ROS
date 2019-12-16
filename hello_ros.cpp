# include <ros/ros.h> 

// 主程式進入點

int main (int argc, char **argv)

{
  // 初始化 ROS 系統
  ros::init(argc, argv, "hello_ros");//將這個程式創建成一個 ROS 節點
  ros::NodeHandle nh ;// 輸出訊息
  while (ros::ok()){                           // 在 ros 順利執行時
  ROS_INFO("Hello World!");                // 印出 Hello World
  ros::Duration(1).sleep();                // 間隔 1 秒
  }
} // 主程式結束
