class Solution {
public:
    
    vector<int> Sums(vector<int>& nums)
    {
        int su=0; 
        vector<int> s;
        s.push_back(su);
        for(int i=0; i<nums.size(); i++)
        {
            su=su+nums[i];
            s.push_back(su);
        }
        return s;
    }
    
    int largestAltitude(vector<int>& gain) 
    {
        if(gain.size()==0) return 0;
        vector<int> g = Sums(gain); 
        int h=g[0];
        for(int j=1; j<g.size(); j++)
        {
            if(g[j]>=h)
                h=g[j];
        }
        return h;
    }
};