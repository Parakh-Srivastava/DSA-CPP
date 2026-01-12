#include <vector>
using namespace std;

class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        double sum = 0;
        for (int i = 0; i < k; i++)
        {
            sum += nums[i];
        }
        double maxAvg = sum / k;
        for (int j = k; j < nums.size(); j++)
        {
            sum += (nums[j] - nums[j - k]);
            double currAvg = sum / k;
            if (currAvg > maxAvg)
            {
                maxAvg = currAvg;
            }
        }
        return maxAvg;
    }
};