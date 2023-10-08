/**
 * @file src.cpp
 * @author Vinay Lanka (vlanka@umd.edu)
 * @brief Source folder for the implementation of the PID Controller
 * @version 0.1
 * @date 2023-10-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "pid_lib.hpp"

/**
 * @brief Construct a new PID::PID object
 *
 * @param dt
 * @param max
 * @param min
 * @param Kp
 * @param Kd
 * @param Ki
 */
PID::PID(double dt, double max, double min, double Kp, double Kd, double Ki) {}

/**
 * @brief The PID Calculate stub.
 *
 * @param setpoint
 * @param pv
 * @return double
 */
double PID::calculate(double setpoint, double pv) { return -1; }
