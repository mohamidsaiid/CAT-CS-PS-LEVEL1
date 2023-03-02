/*
  problem name : Kth Missing Positive Number
*/
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        set<int> x;
        for (auto i : arr) x.insert(i);
        vector<int> t;
        for (int i = 1; i <= 2001; i++)
        {
            if (x.find(i) == x.end()) t.push_back(i);
        }
        return t[k - 1];
    }
};
