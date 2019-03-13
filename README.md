# ridgeback-baxter

This repo contains all working content for the Baxter-on-Ridgeback project.

## Connecting to Ridgeback

- Connect to RIDGEBACK (through Ethernet cable)
  - `$ ssh administrator@cpr-ridgeback`
  - Password : `Clearpath`
  - In the host computer
    - `$ cd ~/ridgeback-cartographer_ws`
    - `$ source remote-ridgeback.sh`
    - `$ roslaunch ridgeback_viz view_robot.launch` (test to check if communication is OK, especially ROS_MASTER_URI configuration)
    - To check robot state : `$ rosrun rqt_runtime_monitor rqt_runtime_monitor`

- Connect to RIDGEBACK (through WIFI)
  - SSID : `Ridgeback_yumi` / Password : `yumimobile`
  - Router IP Address : `192.168.125.5`
  - Robot IP should be `192.168.125.2`

## ridgeback-cartographer_ws

- **Working simulator + able to communicate with the real platform, for 2D-SLAM Mapping**
- Succeed ! Launch everything from the remote PC, `. remote-ridgeback.sh` before all to be able to connect de the RIDGEBACK `ROS_MASTER`

    ```bash
    $ rosbag record -O ridgeback-map-test1 /rear/scan /front/scan /tf
    $ rosrun cartographer_ros cartographer_rosbag_validate -bag_filename ridgeback-map-test1.bag
    ------------
    $ roslaunch ridgeback_viz view_robot.launch config:=cartographer
    $ roslaunch cartographer_ros cartographer_demo.launch bag_filename:=/home/$USER/ridgeback-cartographer_ws/ridgeback-map-test1.bag
    ```  
- Demo `cartographer` with `Gazebo` simulation

  ```bash
  $ cd ~/baxter-ridgeback-kinetic_ws
  $ source devel/setup.bash
  $ roslaunch ridgeback_gazebo ridgeback_RPL-lab.launch config:=dual_hokuyo_lasers
  $ roslaunch ridgeback_viz view_robot.launch
  $ roslaunch ridgeback_cartographer_navigation cartographer_demo.launch
  ```

## Baxter-Ridgeback_ws

- **Simulator for Baxter-on-Ridgeback --> NOT WORKING PROPERLY RIGHT NOW...**

- Gazebo simulation working with Ridgeback + Baxter mounting !
  ```bash
  $ cd ~/baxter-ridgeback-kinetic_ws
  $ ./baxter.sh sim
  $ roslaunch baxter-ridgeback_gazebo baxter-ridgeback_world.launch
  ------------
  $ rosrun baxter_tools enable_robot.py -e
  $ rosrun baxter_examples joint_velocity_wobbler.py
  ------------
  $ roslaunch ridgeback_viz view_robot.launch
  ```  
