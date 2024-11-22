/*

Given a string s, return the longest
palindromic

substring
 in s.


Example 1:
Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.

Example 2:
Input: s = "cbbd"
Output: "bb"


Constraints:
1 <= s.length <= 1000
s consist of only digits and English letters.

*/
#include "../include/longest-palindromic-substring.hpp"

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool startAndEndAreSameChar(const vector<char> &buffer) {
    return (buffer.at(0) == buffer.at(buffer.size() - 1));
}

bool isPalindromeOrTooSmall(const vector<char> &buffer) {
    if (buffer.size() < 2)
        return true;
    if (startAndEndAreSameChar(buffer)) {
        vector<char> shortenedBuf = buffer;
        shortenedBuf.pop_back();
        shortenedBuf.erase(shortenedBuf.begin());
        return isPalindromeOrTooSmall(shortenedBuf);
    } else {
        return false;
    }
}

string longestPalindrome(string str) {
    vector<char> buffer = {};

    for (int i = 0; i < str.length(); i++) {
        buffer.push_back(str[i]);

        for (int j = i + 1; j < str.length() - 1; j++) {
            buffer.push_back(str[j]);

            if (startAndEndAreSameChar(buffer)) {
                cout << "is same: " << buffer.at(0) << " " << str[j] << endl;

                if (isPalindromeOrTooSmall(buffer)) {
                    for (char c : buffer) {
                        cout << c << ", ";
                    }
                    break;
                }
            }
        }
        // at the end, reset buffer
        buffer.clear();
    }

    // vs code setting: C_Cpp.clang_format_fallbackStyle -> copy as json -> { BasedOnStyle: Google, IndentWidth: 4, ColumnLimit: 0}

    string retval = "hello";
    return retval;
}