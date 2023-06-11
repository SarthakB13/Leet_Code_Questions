using namespace std;
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len = size(word1)+size(word2);
        string result = "";
        int w1=0;
        int w2=0;
        for (int i = 0; i < word1.length() || i < word2.length(); i++) 
        { 
        if (i < word1.length()) 
            result += word1[i];
        if (i < word2.length()) 
            result += word2[i];
        }
        return result;
    }
};