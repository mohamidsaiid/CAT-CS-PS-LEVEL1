/*
Problem Name :Running Sum of 1d Array
*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector <int> sum;
        int total = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i;j >= 0; j--){
                total += nums[j];
            }
            sum.push_back(total);
            total = 0;
        }
        return sum;
    }
};
