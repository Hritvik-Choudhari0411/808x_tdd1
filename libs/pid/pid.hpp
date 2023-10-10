/**
 * @file pid.hpp
 * @author Patrik Dominik Pördi (ppordi@umd.edu)
 * @brief 
 * @version 0.2
 * @date 2023-10-10
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
    float Kp, Ki, Kd, dt;

public:
    pid_controller();
    float compute( float input_signal,float ref_signal);
    void set_Kp(float p);
    void set_Ki(float i);
    void set_Kd(float d);
};

#endif // PID_HPP
