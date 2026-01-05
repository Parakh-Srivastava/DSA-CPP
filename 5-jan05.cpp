#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> out(nums.size());
        int product = 1;
        for (int i = 0; i < nums.size(); i++) // left side mutliply
        {
            out[i] = product;
            product *= nums[i];
        }
        product = 1;
        for (int j = nums.size() - 1; j >= 0; j--)
        {
            out[j] *= product;
            product *= nums[j];
        }
        return out;
    }
};