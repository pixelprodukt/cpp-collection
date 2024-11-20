#include <iostream>
#include <vector>
#include "../include/two-sum.hpp"
#include "../include/longest-substring-without-repeating-characters.hpp"
#include "../include/longest-palindromic-substring.hpp"

using namespace std;

int main()
{
    vector<int> nums = {12, 17, 2, 7, 11, 15};
    vector<int> answer = twoSum(nums, 9);

    cout << "Solution for two sums: {" + to_string(answer.at(0)) + ", " + to_string(answer.at(1)) + "}" << endl;

    string inputOne = "abcabcbb";
    string inputTwo = "bbbbb";
    string inputThree = "pwwkew";

    int answerOne = lengthOfLongestSubstring(inputOne);
    int answerTwo = lengthOfLongestSubstring(inputTwo);
    int answerThree = lengthOfLongestSubstring(inputThree);

    cout << "lengthOfLongestSubstring Solution One:   " + to_string(answerOne) << endl;
    cout << "lengthOfLongestSubstring Solution Two:   " + to_string(answerTwo) << endl;
    cout << "lengthOfLongestSubstring Solution Three: " + to_string(answerThree) << endl;

    string palindromTestOne = "babad";
    string palindromTestTwo = "cbbd";

    string palindromSolutionOne = longestPalindrome(palindromTestOne);
    string palindromSolutionTwo = longestPalindrome(palindromTestTwo);

    cout << "Palindrom Solution one: " + palindromSolutionOne << endl;
    cout << "Palindrom Solution two: " + palindromSolutionTwo << endl;

    return 0;
}