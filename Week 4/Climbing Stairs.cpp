/*
  problem name : Climbing Stairs
*/
class Solution {
public:
    int climbStairs(int n) {
        int i = 1,j = 2;
        if(n == 1) return 1;
        if(n == 2) return 2;
        int sum = 0;
        
        for(int k = 3;k<=n;k++){
            sum = i + j;
            i=j;
            j=sum;
        }
        return sum;
    }
};
