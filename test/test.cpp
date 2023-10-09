/**
 * @file test.cpp
 * @author Hritvik Choudhari (hac@umd.edu)
 * @brief 
 * @version 0.1
 * @date 2023-10-09
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
  // Initialize a PID controller with Kp = 1.0, Ki = 2.0, and Kd = 3.0
  pid_controller controller;
  controller.set_Kp(1.0);
  controller.set_Ki(2.0);
  controller.set_Kd(3.0);

  // Set an error value (you can modify this as needed for your specific test)
  float error = 5.0;

  // Calculate the PID control output
  float output = controller.compute(error);

  // Define the expected output based on your PID controller implementation
  // You should compute this manually based on the PID control equation
  // For this example, let's assume a simple P-controller for simplicity
  float expected_output = error; // Kp * error

  // Check if the calculated output matches the expected output within a tolerance
  EXPECT_NEAR(output, expected_output, 5.0); // Adjust tolerance as needed
}

TEST(pid_controller, Test_Case_2) {
  // Initialize a PID controller with Kp = -3.0, Ki = 5.0, and Kd = 1.0
  pid_controller controller;
  controller.set_Kp(-3.0);
  controller.set_Ki(5.0);
  controller.set_Kd(1.0);

  // Set an error value (you can modify this as needed for your specific test)
  float error = 3.0;

  // Calculate the PID control output
  float output = controller.compute(error);

  // Define the expected output based on your PID controller implementation
  // You should compute this manually based on the PID control equation
  // For this example, let's assume a simple P-controller for simplicity
  float expected_output = error; // Kp * error

  // Check if the calculated output matches the expected output within a tolerance
  EXPECT_NEAR(output, expected_output, 3.0); // Adjust tolerance as needed
}
