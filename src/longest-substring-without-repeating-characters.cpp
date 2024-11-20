/*

Given a string s, find the length of the longest
substring without repeating characters.


Example 1:
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

Example 2:
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

Example 3:
Input: s = "pwwkew"
Output: 3

Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.


Constraints:

0 <= s.length <= 5 * 10^4
s consists of English letters, digits, symbols and spaces.

*/

#include <iostream>
#include <vector>
#include <algorithm>
#include "../include/longest-substring-without-repeating-characters.hpp"

using namespace std;

int lengthOfLongestSubstring(string str)
{
    vector<char> longestSubStringFound;
    vector<char> subString;

    for (int i = 0; i < str.length() - 1; i++)
    {
        subString = {};
        subString.push_back(str[i]);

        for (int j = i + 1; j < str.length(); j++)
        {
            vector<char>::iterator it = find(subString.begin(), subString.end(), str[j]);
            if (it == subString.end()) // char was not found in subString
            {
                subString.push_back(str[j]);
            }
            else if (longestSubStringFound.size() < subString.size())
            {
                longestSubStringFound = subString;
                subString = {};
                break;
            }
        }
    }

    string answerString(longestSubStringFound.begin(), longestSubStringFound.end());
    cout << "Longest found substring: " + answerString << endl;

    return longestSubStringFound.size();
}