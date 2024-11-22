#ifndef LONGEST_PALINDROMIC_SUBSTRING_HPP
#define LONGEST_PALINDROMIC_SUBSTRING_HPP

#include <iostream>
#include <vector>

bool startAndEndAreSameChar(const std::vector<char> &buffer);
bool isPalindromeOrTooSmall(const std::vector<char> &buffer);
std::string longestPalindrome(std::string str);

#endif