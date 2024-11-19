#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    // O(n2)
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> retSol;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums.at(i) + nums.at(j) == target)
                {
                    retSol = {i, j};
                    break;
                }
            }
        }
        return retSol;
    }
};

// chatgpt improved solution O(n)
vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> numMap; // Maps a number to its index
    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
        // Check if the complement exists in the map
        if (numMap.find(complement) != numMap.end())
        {
            return {numMap[complement], i};
        }
        // Add the current number and its index to the map
        numMap[nums[i]] = i;
    }
    return {}; // Shouldn't reach here as the problem guarantees a solution
}

int lengthOfLongestSubstring(string s)
{

}

int main()
{
    Solution solution;
    vector<int> nums = {12, 17, 2, 7, 11, 15};
    vector<int> answer = twoSum(nums, 9);

    std::cout << "Solution: {" + to_string(answer.at(0)) + ", " + to_string(answer.at(1)) + "}" << endl;

    string inputOne = "abcabcbb";
    string inputTwo = "bbbbb";
    string inputThree = "pwwkew";

    return 0;
}
