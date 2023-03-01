/*
  problem name : Valid Perfect Square
*/
class Solution {
public:
    bool isPerfectSquare(int num) {
        long long s = 1;
        long long e = num;
        while (s <= e)
        {
            long long m = (s+e)/2;
            if (m*m == num) return true;
            else if(m*m > num) e = m - 1;
            else s = m + 1;
        }
        return false;
    }
};
