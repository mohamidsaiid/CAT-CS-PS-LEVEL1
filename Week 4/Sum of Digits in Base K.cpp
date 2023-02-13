/*
  problem name : Sum of Digits in Base K
*/
class Solution {
public:
    int sumBase(int n, int k) {
        int tot = 0;
        while (n != 0) {
            tot += n % k;
            n /= k;
        }
        return tot; 
    }
};
