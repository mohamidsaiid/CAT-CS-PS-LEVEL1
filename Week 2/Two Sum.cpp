/*
Problem Name : Two Sum
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> to_index;

        for(int i = 0; i < nums.size(); ++i)
        {
            auto it = to_index.find(target - nums[i]);

            if(it != to_index.end())
                return {it->second, i};

            to_index[nums[i]] = i;
        }

       return {0, 0};
    }
};
