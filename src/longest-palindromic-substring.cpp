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

bool startAndEndAreSameChar(const vector<char> &vec) {
    return (vec.at(0) == vec.at(vec.size() - 1));
}

string longestPalindrome(string str) {
    vector<char> buffer = {};

    for (char c : str) {
        buffer.push_back(c);

        /* if (buffer.size() <= 1) {
            continue;
        } */

        for (int i = buffer.size(); i < str.length() - 1; i++) {

            if (startAndEndAreSameChar(buffer)) {
                cout << "is same: " << buffer.at(0) << " " << str[i] << endl;

                vector<char> shortenedBuf = buffer;
                shortenedBuf.pop_back();
                shortenedBuf.erase(shortenedBuf.begin());

                cout << "address of buffer: " << &buffer << endl;
                cout << "address of shortenedList: " << &shortenedBuf << endl;

                // check
            }

            // at the end, reset buffer
            buffer.clear();
        }
    }

    // vs code setting: C_Cpp.clang_format_fallbackStyle -> copy as json -> { BasedOnStyle: Google, IndentWidth: 4, ColumnLimit: 0}

    string retval = "hello";
    return retval;
}