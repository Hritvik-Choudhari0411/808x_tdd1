/**
 * @file pid.hpp
 * @author Mudit Singal (msingal@umd.edu)
 * @brief 
 * @version 0.1
 * @date 2023-10-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */
 
#ifndef PID_HPP
#define PID_HPP

#include <iostream>

class pid_controller
{
private:
    float Kp, Ki, Kd, previous_error, integral, set_point;

public:
    pid_controller();
    float compute(float input_signal);
    void set_Kp(float p);
    void set_Ki(float i);
    void set_Kd(float d);
};

#endif // PID_HPP
