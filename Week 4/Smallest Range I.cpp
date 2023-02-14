/*
  problem name : Smallest Range I
*/
class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        sort (nums.begin(), nums.end());
        int diff;
        int l = nums.size()-1;
        if(nums[l]-k>=nums[0]+k){
            diff=(nums[l]-k)-(nums[0]+k);
        }
        else{
            int fl=nums[l]-nums[0]+k;
            diff=nums[l]-fl-nums[0]+k;
        }
        return diff;
    }
};
