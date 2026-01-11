#include <vector>

using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int left = 0, right = height.size() - 1, ans = 0;
        while (left < right)
        {
            if (height[left] < height[right])
            {
                int product = height[left] * (right - left);
                if (product > ans)
                {
                    ans = product;
                }
                left++;
            }
            else
            {
                int product = height[right] * (right - left);
                if (product > ans)
                {
                    ans = product;
                }
                right--;
            }
        }
        return ans;
    }
};