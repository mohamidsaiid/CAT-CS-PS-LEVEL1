/*
  problem name : The K Weakest Rows in a Matrix
*/
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        set<pair<int, int>> s;
        for (int i = 0; i < mat.size(); i++)
        {
            int tot  = accumulate(mat[i].begin(), mat[i].end(), 0);
            s.insert({tot, i});
        }
        vector <int> x;
        for (auto i = s.begin(); i != s.end(); i++)
        {
            x.push_back(i->second);
            if (k == 1) break;
            k--;
        }
        return x;
    }
};
