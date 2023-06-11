class Solution {
public:
    int rob(vector<int>& nums) 
    {
        if(nums.size()<1)return 0;
        if(nums.size()==1)return nums[0];
        vector<int> sums(nums.size(),0);

        sums[0]=nums[0];
        sums[1]=max(nums[0],nums[1]);

        for(int i=2; i<nums.size();i++)
        {
            sums[i] = max(sums[i-2]+nums[i], sums[i-1]);
        }
        return sums[nums.size()-1];

    }
};