#include <unordered_set>
#include <string>

using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int max = 0, left = 0, right = 0;
        unordered_set<char> dict;
        for (; right < s.size(); right++)
        {
            while (dict.count(s[right]))
            {
                dict.erase(s[left]);
                left++;
            }
            dict.emplace(s[right]);
            int curr = dict.size();
            if (curr > max)
            {
                max = curr;
            }
        }
        return max;
    }
};