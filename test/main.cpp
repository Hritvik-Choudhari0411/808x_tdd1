/**
 * @file main.cpp
 * @author Hritvik Choudhari (hac@umd.edu)
 * @brief 
 * @version 0.1
 * @date 2023-10-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <gtest/gtest.h>

void function_not_used() {
  
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
