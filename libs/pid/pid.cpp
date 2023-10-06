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

/**
 * @brief Pid controller class implementation. Has a constructor to initialize Kp, Ki, and Kd values to 1.0. 'compute' function to compute the output based on the given input signal. Functions to set the values of Kp, Ki, and Kd individually.
 * 
 */
class pid_controller
{
  private:
    float Kp, Ki, Kd;

  public:
      pid_controller()
      {
        Kp = 1.0;
        Ki = 1.0;
        Kd = 1.0;
      }

      float compute(float input_signal)
      {
        return 1.0;
      }

      void set_Kp(float p)
      {
        Kp = p;
      }

      void set_Ki(float i)
      {
        Ki = i;
      }

      void set_Kd(float d)
      {
        Kd = d;
      }
};
