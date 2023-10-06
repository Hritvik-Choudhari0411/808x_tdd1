/**
 * @file txt_search.cpp
 * @author Mudit Singal (msingal@umd.edu)
 * @brief
 * @version 0.1
 * @date 2023-09-27
 *
 * @copyright Copyright (c) 2023
 *
 */
#include "txt_search.hpp"

/**
 * @brief Extract function to find and return the index of sub string that is
 * searched through the main string.
 *
 * @param main_arr The primary text through which we search for the required
 * text
 * @param main_arr_len The length of primary text
 * @param sub_arr The sub string that is to be found in the main text
 * @param sub_arr_len The length of sub string
 * @return The integer value of index at which the sub string is found in main
 * string. Returns -1 if string not found.
 */
int findPosition(char *main_arr, int main_arr_len, char *sub_arr,
                 int sub_arr_len) {
  int position1 = -1;
  for (int i = 0; i < main_arr_len - sub_arr_len + 1; i++) {
    bool found = true;
    for (int j = 0; j < sub_arr_len; j++)
      if (main_arr[i + j] != sub_arr[j]) found = false;

    if (found) {
      position1 = i;
      break;
    }
  }
  return position1;
}

/**
 * @brief Function to set the main string, sub string, and print the index at
 * which sub string is found.
 *
 */
void printPosition() {
  char text[1024] = "1234567890";
  int text_length = 10;
  char array_to_search1[4] = "23";
  int array_to_search1_length = 2;
  int search_pos = -1;
  search_pos = findPosition(text, text_length, array_to_search1,
                            array_to_search1_length);
  std::cout << search_pos << std::endl;
}