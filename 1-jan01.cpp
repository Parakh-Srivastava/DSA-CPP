#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int j, i;
        unordered_map<int, int> map;
        int firstNum;
        for (i = 0; i < nums.size(); i++)
        {
            firstNum = target - nums[i];
            if (map.count(firstNum))
            {
                return {i, map[firstNum]};
            }
            map[nums[i]] = i;
        }
        return {};
    }
};