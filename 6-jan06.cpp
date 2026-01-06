#include <unordered_set>
#include <vector>

using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        if (nums.empty())
            return 0;

        unordered_set<int> set;
        for (int i : nums)
        {
            set.emplace(i);
        }

        int highestStreak = 0;
        for (int num : set)
        {
            if (!set.count(num - 1))
            {
                int currentNum = num;
                int currentStreak = 1;

                while (set.count(currentNum + 1))
                {
                    currentStreak++;
                    currentNum++;
                }

                if (currentStreak > highestStreak)
                {
                    highestStreak = currentStreak;
                }
            }
        }
        return highestStreak;
    }
};