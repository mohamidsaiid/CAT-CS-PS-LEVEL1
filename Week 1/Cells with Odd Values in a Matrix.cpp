/*
  probelm name : Cells with Odd Values in a Matrix
*/
class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>>mat(m,vector<int>(n,0));
        vector<int> in;
        for (int i = 0; i < indices.size(); i++)
        {
            for (int j = 0; j < indices[i].size(); j++)
            {
               in.push_back(indices[i][j]); 
            }
        }
        for (int i = 0; i < in.size(); i+=2)
        {
            int row = in[i];
            int col = in[i+1];
            for (int j = 0; j < n; j++)
                mat[row][j]++;
            for (int j = 0; j < m; j++)
                mat[j][col]++;
        }
        int odd = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j] % 2 != 0) odd++;
            }
        }
        return odd;
    }
};
