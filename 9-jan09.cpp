#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int size = nums.size(), target;
        vector<vector<int>> ans;
        for (int i = 0; i < size; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            target = -nums[i];
            int left = i + 1, right = size - 1;
            while (left < right)
            {
                if (nums[left] + nums[right] == target)
                {
                    ans.push_back({nums[left], nums[right], nums[i]});
                    while (left < right && nums[left] == nums[left + 1])
                        left++;
                    while (left < right && nums[right] == nums[right - 1])
                        right--;

                    left++;
                    right--;
                }
                else if (nums[left] + nums[right] > target)
                {
                    right--;
                }
                else
                {
                    left++;
                }
            }
        }
        return ans;
    }
};