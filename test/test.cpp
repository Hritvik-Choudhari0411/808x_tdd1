/**
 * @file test.cpp
 * @author Patrik Dominik Pördi (ppordi@umd.edu)
 * @brief 
 * @version 0.2
 * @date 2023-10-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "pid.hpp"
#include <gtest/gtest.h>


/**
 * @brief Construct a new TEST object
 * 
 */
TEST(pid_controller, Test_Case_1) {
  // Initialize a PID controller with Kp, Ki, and Kd
  pid_controller controller;
  controller.set_Kp( 0.001);
  controller.set_Ki(0.0);
  controller.set_Kd(0.01);

  // Set an error value (you can modify this as needed for your specific test)
  float start_velocity = 10;
  float target_velocity = 11;

  // Calculate the PID control output
  float output = controller.compute(target_velocity,start_velocity);
  
  // Check if the calculated output matches the expected output within a tolerance
  EXPECT_NEAR(output, 11, 0.05); // Adjust tolerance as needed
  
}

TEST(pid_controller, Test_Case_2) {
  // Initialize a PID controller with Kp, Ki, and Kd
  pid_controller controller;
  controller.set_Kp( 0.1);
  controller.set_Ki(0.0);
  controller.set_Kd(0.1);

  // Set an error value (you can modify this as needed for your specific test)
  float start_velocity = 8;
  float target_velocity = 8;

  // Calculate the PID control output
  float output = controller.compute(target_velocity,start_velocity);
  std::cout<<output<<std::endl;
  // Check if the calculated output matches the expected output within a tolerance
  EXPECT_NEAR(output, 8, 0.2); // Adjust tolerance as needed
}
