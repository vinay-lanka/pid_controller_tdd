/**
 * @file test.cpp
 * @author Vinay Lanka (vlanka@umd.edu)
 * @brief Tests for the PID Controller Implementation
 * @version 0.1
 * @date 2023-10-08
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <gtest/gtest.h>
#include "pid_lib.hpp"

/**
 * @brief Testing to check if base tests work.
 *
 */
TEST(dummy_test, pass_test) { EXPECT_EQ(1, 1); }

/**
 * @brief Testing for PV positive and setpoint 0 to get min output.
 *
 */
TEST(PID_Implementation_Test, Test_min) {
  PID pid_test_obj(0.1, 25.0, -25.0, 0.75, 0.1, 0.02);
  double setpoint = 0.0;
  double pv = 100.0;
  ASSERT_NEAR(pid_test_obj.calculate(setpoint, pv), -25.0, 0.0001);
}

/**
 * @brief Testing for PV negative and setpoint 0 to get max output.
 *
 */
TEST(PID_Implementation_Test, Test_max) {
  PID pid_test_obj(0.1, 25.0, -25.0, 0.75, 0.1, 0.02);
  double setpoint = 0.0;
  double pv = -75.0;
  ASSERT_NEAR(pid_test_obj.calculate(setpoint, pv), 25.0, 0.0001);
}

/**
 * @brief Testing for 0 Process value and setpoint.
 *
 */
TEST(PID_Implementation_Test, Test_zero) {
  PID pid_test_obj(0.1, 25.0, -25.0, 0.75, 0.1, 0.02);
  double setpoint = 0.0;
  double pv = 0.0;
  ASSERT_NEAR(pid_test_obj.calculate(setpoint, pv), 0.0, 0.01);
}

/**
 * @brief Testing for a value and checking output.
 *
 */
TEST(PID_Implementation_Test, Test_value) {
  PID pid_test_obj(0.1, 100, -100, 0.1, 0.01, 0.5);
  double setpoint = 0.0;
  double pv = 20.0;
  ASSERT_NEAR(pid_test_obj.calculate(setpoint, pv), -5.0, 0.0001);
}
