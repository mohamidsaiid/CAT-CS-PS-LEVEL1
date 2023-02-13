/*
  problem name : Power of Two
*/
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false; 
        double x = log2(n);
        n = log2(n);
        if ((x-n) > 0) return false;
        return true;
    }
};
