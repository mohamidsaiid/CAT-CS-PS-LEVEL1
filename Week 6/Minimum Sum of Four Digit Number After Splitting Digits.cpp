/*
  problem name : Minimum Sum of Four Digit Number After Splitting Digits
*/
class Solution {
public:
    int minimumSum(int num) {
        int n1 = num % 10;
        num /=10;
        int n2 = num % 10;
        num /=10;
        int n3 = num % 10;
        num /=10;
        int n4 = num % 10;
        vector<int> x;
        x.push_back(n1);
        x.push_back(n2);
        x.push_back(n3);
        x.push_back(n4);
        sort(x.begin(),x.end());
        return (x[0]*10+x[3]) + (x[1]*10 + x[2]);
    }
};
