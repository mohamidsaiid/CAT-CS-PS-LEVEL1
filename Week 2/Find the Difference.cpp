/*
Problem Name : Find the Difference
*/

class Solution {
public:
    char findTheDifference(const string &s,const string &t)
    {
        int cnt[28] = { 0 };

        --cnt[t.back() - 'a'];
        for(int i = 0; i < s.size(); ++i)
        {
            --cnt[t[i] - 'a'];
            ++cnt[s[i] - 'a'];
        }

        return find(cnt, cnt + 28, -1) - cnt + 'a';
    }
};
