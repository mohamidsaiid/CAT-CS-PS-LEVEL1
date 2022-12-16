/*
Problem Name : Matrix Diagonal Sum
*/

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int total = 0;
        for (int i = 0; i < mat.size(); i++)
        {
            total += mat[i][i];
        }
        int j = mat.size() - 1;
        for (int i = 0; i < mat.size(); i++)
        {
            if(i == j)
            {
                j--;
                continue;
            } 
            total += mat[i][j];
            j--;
        }
        return total;
    }
};
