/*
  problem name : Search Insert Position
*/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right)
        {
            int m = (left + right) / 2;
            if (target == nums[m]) return m;
            else if (target < nums[m]) right = m - 1;
            else left = m + 1;
        }
        return left;
    }
};
