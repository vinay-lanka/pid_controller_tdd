/**
 * @file main.cpp
 * @author Vinay Lanka (120417665)
 * @brief Tests for PID controller implementation
 * @version 0.1
 * @date 2023-10-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <gtest/gtest.h>

#include "pid_lib.hpp"

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
