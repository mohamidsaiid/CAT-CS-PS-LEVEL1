class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxx = 0;
        int maxx_1 = 0;
        int flag;
        for (int i = 0; i < nums.size(); i++)
        {
            if (maxx_1 < nums[i])
            {
                maxx_1 = nums[i];
                flag = i;
            }
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (maxx < nums[i] && i != flag)
            {
                maxx = nums[i];
            }
        }
        return (maxx - 1) * (maxx_1 - 1);
    }
};
