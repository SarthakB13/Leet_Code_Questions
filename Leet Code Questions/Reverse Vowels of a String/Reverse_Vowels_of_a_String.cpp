class Solution 
{
public:
    bool vowel(char c)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            return true;
        
        return false;
    }

    string reverseVowels(string s) {
    int st = 0;
    int en = s.size() - 1;
    while (st < en)
    {
        if (vowel(s[st]) && vowel(s[en]))
            swap(s[st++], s[en--]);
        if (!vowel(s[st]))
            st++;
        if (!vowel(s[en]))
            en--;
    }
    return s;
    }
};