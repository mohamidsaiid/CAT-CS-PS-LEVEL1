/*
Problem Name : Richest Customer Wealth
*/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth = 0;
        int maxx = 0;
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < accounts[i].size(); j++)
            {
                maxx += accounts[i][j];
            }
        }
        for (int i = 0; i < accounts.size(); i++)
        {
            
            for (int j = 0; j < accounts[i].size(); j++)
            {
                wealth += accounts[i][j];
            }
            if (maxx < wealth)
            {
                maxx = wealth;
            }
            wealth = 0;
        }
        //int maxx = max(wealth,wealth + wealth.size());
        return maxx;
    }
};
