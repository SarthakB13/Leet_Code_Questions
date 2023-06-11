class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int highest = 0;
        vector<bool> results;
        for(int i = 0; i<candies.size(); i++)
        {
            if(candies[i]>highest)
                highest = candies[i];
        
        }

        for(int j = 0; j<candies.size(); j++)
        {
            if(candies[j]+extraCandies >= highest)
            {
                results.push_back(true);
            }
            else
            {
                results.push_back(false);
            }
        }
        return results;
    }
};