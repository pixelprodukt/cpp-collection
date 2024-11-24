#include <iostream>
#include <vector>
#include "two-sum.h"
#include "longest-substring-without-repeating-characters.h"
#include "longest-palindromic-substring.h"

int main()
{
    std::vector<int> nums = {12, 17, 2, 7, 11, 15};
    std::vector<int> answer = twoSum(nums, 9);

    std::cout << "Solution for two sums: {" + std::to_string(answer.at(0)) + ", " + std::to_string(answer.at(1)) + "}" << std::endl;

    std::string inputOne = "abcabcbb";
    std::string inputTwo = "bbbbb";
    std::string inputThree = "pwwkew";

    int answerOne = lengthOfLongestSubstring(inputOne);
    int answerTwo = lengthOfLongestSubstring(inputTwo);
    int answerThree = lengthOfLongestSubstring(inputThree);

    std::cout << "lengthOfLongestSubstring Solution One:   " + std::to_string(answerOne) << std::endl;
    std::cout << "lengthOfLongestSubstring Solution Two:   " + std::to_string(answerTwo) << std::endl;
    std::cout << "lengthOfLongestSubstring Solution Three: " + std::to_string(answerThree) << std::endl;

    std::string palindromTestOne = "babad";
    std::string palindromTestTwo = "cbbd";

    std::string palindromSolutionOne = longestPalindrome(palindromTestOne);
    std::string palindromSolutionTwo = longestPalindrome(palindromTestTwo);

    std::cout << "New stuff!" << "\n";

    /* std::cout << "Palindrom Solution one: " + palindromSolutionOne << std::endl;
    std::cout << "Palindrom Solution two: " + palindromSolutionTwo << std::endl; */

    return 0;
}