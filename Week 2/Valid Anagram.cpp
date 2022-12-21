/*
Problem Name : Valid Anagram
*/

class Solution {
public:
    bool isAnagram(string s, string t)
    {
        if(s.size() != t.size())
            return false;
            
        int cnt[28] = { 0 };

        for(int i = 0; i < (int)s.size(); ++i)
        {
            ++cnt[s[i] - 'a'];
            --cnt[t[i] - 'a'];
        }

        for(auto u : cnt)
            if(u) return false;
        
        return true;
    }
};
