## ROS_Topic
* Author : Ying-Hua(Alyson) Chen
* E-mail : qoo810823@gmail.com
* Date   : 2015.10.02


Just a test for upload source code to github.
This example is about how ROS "TOPIC" work.

## STEPS of build
1. mkdir ~{your_catkin_workspace}/src/{project_name}
2. cd ~{your_catkin_workspace}/src/{project_name}
3. git clone https://github.com/AlysonQ/ROS_Topic
4. cd ~~{your_catkin_workspace}/
5. catkin_make

## STEPS of run

terminal 1
```
roscore
```
terminal 2
```
rosrun {project_name} talker
```
terminal 3
```rosrun {project_name} listenr
```
