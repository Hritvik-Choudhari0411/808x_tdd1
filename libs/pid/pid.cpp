/**
 * @file pid.cpp
 * @author Patrik Dominik Pördi (ppordi@umd.edu)
 * @brief
 * @version 0.2
 * @date 2023-10-10
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "pid.hpp"

// Constructor to initialize Kp, Ki, and Kd values to 1.0 and dt to 0.01
/** @brief Class for PID controller
 *
 */
pid_controller::pid_controller() {
  Kp = 1.0;
  Ki = 1.0;
  Kd = 1.0;
  dt = 0.01;
}

// Compute function to calculate the PID control output based on the input
// signal
/**
 * @brief
 *
 * @param input_signal
 * @param ref_signal
 * @return float
 */
float pid_controller::compute(float input_signal, float ref_signal) {
  // Implement PID control logic
  float output_vel;
  float integral = 0;
  float error_i = 0;
  float error = input_signal - ref_signal;

  // Integral term
  integral += (error * dt);

  // Derivative term
  float derivative = (error - error_i) / dt;

  // PID calculation
  output_vel = ref_signal + Kp * error + Ki * integral + Kd * derivative;

  return output_vel;
}

// Functions to set the values of Kp, Ki, and Kd individually
/**
 * @brief
 *
 * @param p
 */
void pid_controller::set_Kp(float p) { Kp = p; }

/**
 * @brief
 *
 * @param i
 */
void pid_controller::set_Ki(float i) { Ki = i; }
/**
 * @brief
 *
 * @param d
 */
void pid_controller::set_Kd(float d) { Kd = d; }
