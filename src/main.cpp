#include <iostream>
#include <vector>

#include "longest-palindromic-substring.hpp"
#include "longest-substring-without-repeating-characters.hpp"
#include "two-sum.hpp"
#include "logger.hpp"

static int allocationCount = 0;
static int copyCount = 0;

void* operator new(size_t size) {
    std::cout << "Allocated " << size << " bytes\n";
    allocationCount++;
    return malloc(size);
}

struct Data {
    int value = 0;

    Data() = default;
    Data(int val) {
        value = val;
    }

    Data(const Data& other) : value(other.value) {
        copyCount++;
        std::cout << "Copied Data\n";
    }
};

static void printVector(const std::vector<Data>& vector) {
    std::cout << "Size: " << vector.size() << std::endl;
    if (vector.empty()) {
        return;
    }

    std::cout << "Elements: { ";
    for (int i = 0; i < vector.size(); i++) {
        std::cout << vector[i].value;
        if (i < vector.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << " }\n";
}

int main() {

    LogLevel level = ERROR;
    Logger log(level);

    log.info("Sollte nur bei LogLevel INFO zu sehen sein.");
    log.warning("Sollte nur bei LogLevel INFO und WARNING zu sehen sein.");
    log.error("Sollte bei jedem LogLevel zu sehen sein.");

    std::vector<Data> vector;
    vector.reserve(5);

    for (int i = 0; i < 5; i++) {
        vector.push_back(i);
    }

    printVector(vector);

    std::cout << allocationCount << " allocations\n";
    std::cout << copyCount << " copies\n";
    

    /* std::vector<int> nums = {12, 17, 2, 7, 11, 15};
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

    std::cout << "New stuff!" << "\n"; */

    /* std::cout << "Palindrom Solution one: " + palindromSolutionOne << std::endl;
    std::cout << "Palindrom Solution two: " + palindromSolutionTwo << std::endl; */

    return 0;
}