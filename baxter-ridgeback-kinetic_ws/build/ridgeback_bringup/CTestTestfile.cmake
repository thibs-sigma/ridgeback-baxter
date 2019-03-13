# CMake generated Testfile for 
# Source directory: /home/thib/baxter-ridgeback-kinetic_ws/src/ridgeback/ridgeback_bringup
# Build directory: /home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_bringup
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_ridgeback_bringup_roslaunch-check_launch_accessories.launch "/home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_bringup/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_bringup/test_results/ridgeback_bringup/roslaunch-check_launch_accessories.launch.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_bringup/test_results/ridgeback_bringup" "/opt/ros/kinetic/share/roslaunch/cmake/../scripts/roslaunch-check -o '/home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_bringup/test_results/ridgeback_bringup/roslaunch-check_launch_accessories.launch.xml' '/home/thib/baxter-ridgeback-kinetic_ws/src/ridgeback/ridgeback_bringup/launch/accessories.launch' ")
subdirs(gtest)
