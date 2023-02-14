/*
  problem name : Palindrome Number
*/
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        else if (x < 10) return true;
        else if (x % 10 == 0) return false;
        int rvrt = 0;
        while(x > rvrt) {
            rvrt = rvrt * 10 + x % 10;
            x /= 10;
        }

        return x == rvrt || x == rvrt/10;
    }
};
