/*
Problem Name : Transpose Matrix
*/

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>> matrans(col, vector<int>(row));
        for(int i = 0 ; i < row ; i++){
            for(int j = 0 ; j < col ; j++){
                matrans[j][i] = matrix[i][j];
            }
        }
        return matrans;
    }
};
