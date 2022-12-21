/*
Problem Name : Contains Duplicate II
*/

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k)
    {
        unordered_map<int, int> to_index;

        for(int i = 0; i < nums.size(); ++i)
        {
            auto it = to_index.find(nums[i]);

            if (it != to_index.end() && i - it->second <= k)
                return true;

            to_index[nums[i]] = i;
        }
        
        return false;
    }
};
