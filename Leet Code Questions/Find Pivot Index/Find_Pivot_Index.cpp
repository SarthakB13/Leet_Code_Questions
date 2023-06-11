class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int Total=0;
        for(int i=0; i<nums.size(); i++)
        {
            Total = Total + nums[i];
        }
        int leftSum=0;
        int rightSum;
        for(int i=0; i<nums.size(); i++)
        {
            rightSum = Total - (leftSum + nums[i]);
            if(rightSum == leftSum)
                return i;

            leftSum = leftSum + nums[i];
        }
        return -1;

    }
};