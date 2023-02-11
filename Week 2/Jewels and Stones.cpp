/*
Problem Name : Jewels and Stones
*/
class Solution {
public:
    int numJewelsInStones(const string &jewels, const string &stones)
    {
        unordered_map<char, int> x;
        for (auto i : stones) x[i]++;
        int cnt = 0;
        for (char i : jewels)
        {
            auto k = x.find(i);
            if(k != x.end()) cnt += k->second;
        }
        return cnt;
    }
};
