# CMake generated Testfile for 
# Source directory: /home/thib/baxter-ridgeback-kinetic_ws/src/ridgeback/ridgeback_gazebo
# Build directory: /home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_gazebo
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_ridgeback_gazebo_roslaunch-check_launch_ridgeback_world.launch "/home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_gazebo/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_gazebo/test_results/ridgeback_gazebo/roslaunch-check_launch_ridgeback_world.launch.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_gazebo/test_results/ridgeback_gazebo" "/opt/ros/kinetic/share/roslaunch/cmake/../scripts/roslaunch-check -o '/home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_gazebo/test_results/ridgeback_gazebo/roslaunch-check_launch_ridgeback_world.launch.xml' '/home/thib/baxter-ridgeback-kinetic_ws/src/ridgeback/ridgeback_gazebo/launch/ridgeback_world.launch' ")
subdirs(gtest)
