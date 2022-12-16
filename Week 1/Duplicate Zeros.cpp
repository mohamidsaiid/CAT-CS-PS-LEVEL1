/*
Problem Name : Duplicate Zeros
*/

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector <int> x;
        for(int i = 0; i < arr.size(); i++)
        {
            x.push_back(arr[i]);
            if(arr[i] == 0)
            {
                x.push_back(0);
            }
        }
        for(int i = 0; i < arr.size(); i++)
        {
            arr[i] = x[i];
        }
    }
};
