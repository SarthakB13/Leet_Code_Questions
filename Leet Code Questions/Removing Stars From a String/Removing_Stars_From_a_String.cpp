class Solution {
public:
    string removeStars(string s) {
        stack<char> ch;
        stack<int> temp;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='*')
            {
                ch.pop();
            }
            else
            {
                ch.push(s[i]);
            }
        }
        while (ch.empty() == false)
        {
        temp.push(ch.top());
        ch.pop();
        }  
        string ans = "";
        int j=0;
        while (temp.empty() == false)
        {
            ans.push_back(temp.top()); 
            temp.pop();
        }
        return ans;
    }
};