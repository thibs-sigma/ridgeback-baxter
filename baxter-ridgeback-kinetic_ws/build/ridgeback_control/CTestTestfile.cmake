# CMake generated Testfile for 
# Source directory: /home/thib/baxter-ridgeback-kinetic_ws/src/ridgeback/ridgeback_control
# Build directory: /home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_control
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_ridgeback_control_roslaunch-check_launch_control.launch "/home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_control/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_control/test_results/ridgeback_control/roslaunch-check_launch_control.launch.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_control/test_results/ridgeback_control" "/opt/ros/kinetic/share/roslaunch/cmake/../scripts/roslaunch-check -o '/home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_control/test_results/ridgeback_control/roslaunch-check_launch_control.launch.xml' '/home/thib/baxter-ridgeback-kinetic_ws/src/ridgeback/ridgeback_control/launch/control.launch' ")
add_test(_ctest_ridgeback_control_roslaunch-check_launch_teleop.launch "/home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_control/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_control/test_results/ridgeback_control/roslaunch-check_launch_teleop.launch.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_control/test_results/ridgeback_control" "/opt/ros/kinetic/share/roslaunch/cmake/../scripts/roslaunch-check -o '/home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_control/test_results/ridgeback_control/roslaunch-check_launch_teleop.launch.xml' '/home/thib/baxter-ridgeback-kinetic_ws/src/ridgeback/ridgeback_control/launch/teleop.launch' ")
subdirs(gtest)