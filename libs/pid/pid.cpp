/**
 * @file pid.cpp
 * @author Mudit Singal (msingal@umd.edu)
 * @brief 
 * @version 0.1
 * @date 2023-10-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */
 
#include "pid.hpp"

// Constructor to initialize Kp, Ki, and Kd values to 1.0
pid_controller::pid_controller()
{
    Kp = 1.0;
    Ki = 1.0;
    Kd = 1.0;
    previous_error = 0.0;
    integral = 0.0;
    set_point = 0.0;
    
}

// Compute function to calculate the PID control output based on the input signal
float pid_controller::compute(float input_signal)
{
    // Implement your PID control logic here
    // This function should calculate the control output based on the PID algorithm
    // and return the result
    // For now, it just returns a constant value of 1.0, which is not correct
    // Error calculation
    float error = set_point - input_signal;

    // Integral term
    integral += error;

    // Derivative term
    float derivative = error - previous_error;

    // PID calculation
    float output = Kp * error + Ki * integral + Kd * derivative;

    // Update previous error for the next iteration
    previous_error = error;

    return output;
}

// Functions to set the values of Kp, Ki, and Kd individually
void pid_controller::set_Kp(float p)
{
    Kp = p;
}

void pid_controller::set_Ki(float i)
{
    Ki = i;
}

void pid_controller::set_Kd(float d)
{
    Kd = d;
}
