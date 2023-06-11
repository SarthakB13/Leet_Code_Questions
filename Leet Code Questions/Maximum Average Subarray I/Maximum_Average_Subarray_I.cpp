#include <algorithm>
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        int sum = 0;
        for(int i=0; i<k; i++)
        {
            sum = sum+nums[i];
        }
        int ma = sum;
        for(int i = k; i<nums.size(); i++)
        {
            sum = sum + nums[i];
            sum = sum - nums[i-k];

            ma = max(ma, sum);
        }

        double ans = double(ma)/double(k);
        return ans;
    }
};