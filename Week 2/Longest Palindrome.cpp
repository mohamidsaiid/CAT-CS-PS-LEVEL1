/*
Problem Name : Longest Palindrome
*/

class Solution {
public:
    int longestPalindrome(const string s) {

        unordered_map<char, int> cnt;

        for(auto u : s)
            ++cnt[u];
        
        bool odd = false;

        int ret = 0;
        for(auto it = cnt.begin(); it != cnt.end(); ++it)
            if(it->second & 1)
            {
                odd = true;
                ret += it->second - 1;
            }
            else
                ret += it->second;
        
        return ret + odd;
    }
};
