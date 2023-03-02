/*
  problem name : Check If N and Its Double Exist
*/
class Solution {
public:
    int binarySearch(vector<int>& x,int target, int l, int h,int i)
    {
        while (l <= h)
        {
            int m = (l+h)/2;
            if (x[m] == target && m != i) return m;
            else if (x[m] < target) l = m + 1;
            else h = m - 1;
        }
        return -1;
    }
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size() ; i++)
        {
            if (binarySearch(arr,arr[i]*2,0,arr.size()-1,i) >= 0) return true;
        }
        return false;
    }
};
