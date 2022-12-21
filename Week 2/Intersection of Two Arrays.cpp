/*
Problem Name : Intersection of Two Arrays
*/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        unordered_set<int> arr;

        for(auto u : nums1)
            arr.insert(u);
        
        unordered_set<int> ret;

        for(auto u : nums2)
            if(arr.find(u) != arr.end())
                ret.insert(u);
        
        return {ret.begin(), ret.end()};
    }
};
