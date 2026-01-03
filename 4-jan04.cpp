#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> dict;
        for (int i : nums)
        {
            dict[i]++;
        }
        vector<vector<int>> bucket(nums.size() + 1);
        for (auto &it : dict)
        {
            bucket[it.second].push_back(it.first);
        }
        vector<int> ans;
        for (int j = bucket.size() - 1; j >= 0 && ans.size() < k; j--)
        {
            for (int num : bucket[j])
            {
                ans.push_back(num);
                if (ans.size() == k)
                {
                    return ans;
                }
            }
        }
        return ans;
    }
};