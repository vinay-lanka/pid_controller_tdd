/**
 * @file pid_lib.hpp
 * @author Vinay Lanka (vlanka@umd.edu)
 * @brief Header file for the PID Controller
 * @version 0.1
 * @date 2023-10-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#pragma once

/**
 * @brief The PID Class Declared with methods to initialise the controller and
 * then use the calculate function to get the output.
 *
 */
class PID {
 public:
  PID(double dt, double max, double min, double Kp, double Kd, double Ki);
  // Returns the manipulated variable given a setpoint and current process value
  double calculate(double setpoint, double pv);

 private:
  // Kp -  proportional gain
  // Ki -  Integral gain
  // Kd -  derivative gain
  // dt -  loop interval time
  // max - maximum value of manipulated variable
  // min - minimum value of manipulated variable
  double _dt;
  double _max;
  double _min;
  double _Kp;
  double _Kd;
  double _Ki;
  double _pre_error;
  double _integral;
};
