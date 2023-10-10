/**
 * @file main.cpp
 * @author Vinay Lanka (vlanka@umd.edu)
 * @brief Driver program for the PID Controller implementation
 * @version 0.1
 * @date 2023-10-04
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <cstdio>
#include "pid_lib.hpp"

int main() {

    PID pid = PID(0.1, 100, -100, 0.1, 0.01, 0.5);

    double val = 20;
    for (int i = 0; i < 100; i++) {
        double inc = pid.calculate(0, val);
        printf("val:% 7.3f inc:% 7.3f\n", val, inc);
        val += inc;
    }

    return 0;
}
