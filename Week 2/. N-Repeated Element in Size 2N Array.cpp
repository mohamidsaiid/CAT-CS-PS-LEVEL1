/*
Problem Name : . N-Repeated Element in Size 2N Array
*/

class Solution {
public:
    int repeatedNTimes(vector<int>& nums)
    {
        unordered_set<int> unique;
        
        for(auto u : nums)
            if(unique.insert(u).second == false)
                return u;
        
        return -1;
    }
};
