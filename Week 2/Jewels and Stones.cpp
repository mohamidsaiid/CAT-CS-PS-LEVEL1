/*
Problem Name : Jewels and Stones
*/
class Solution {
public:
    int numJewelsInStones(const string &jewels, const string &stones)
    {
        bool lower[28] = { false };
        bool upper[28] = { false };

        for(auto u : jewels)
            if(islower(u)) lower[u - 'a'] = true;
            else upper[u - 'A'] = true;
            
        int cnt = 0;
        for(auto u : stones)
            if(islower(u)) cnt += lower[u - 'a'];
            else cnt += upper[u - 'A'];

        return cnt;
    }
};
