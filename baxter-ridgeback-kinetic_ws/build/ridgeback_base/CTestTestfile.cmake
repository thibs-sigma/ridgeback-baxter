# CMake generated Testfile for 
# Source directory: /home/thib/baxter-ridgeback-kinetic_ws/src/ridgeback/ridgeback_base
# Build directory: /home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_base
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_ridgeback_base_roslaunch-check_launch_base.launch "/home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_base/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_base/test_results/ridgeback_base/roslaunch-check_launch_base.launch.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_base/test_results/ridgeback_base" "/opt/ros/kinetic/share/roslaunch/cmake/../scripts/roslaunch-check -o '/home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_base/test_results/ridgeback_base/roslaunch-check_launch_base.launch.xml' '/home/thib/baxter-ridgeback-kinetic_ws/src/ridgeback/ridgeback_base/launch/base.launch' ")
add_test(_ctest_ridgeback_base_roslint_package "/home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_base/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_base/test_results/ridgeback_base/roslint-ridgeback_base.xml" "--working-dir" "/home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_base" "--return-code" "/opt/ros/kinetic/share/roslint/cmake/../../../lib/roslint/test_wrapper /home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_base/test_results/ridgeback_base/roslint-ridgeback_base.xml make roslint_ridgeback_base")
subdirs(gtest)
