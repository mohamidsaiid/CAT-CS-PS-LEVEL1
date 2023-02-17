/*
  problem name : Fibonacci Number
*/
class Solution {
public:
    int fib(int n) {
        //n -=1;
        double a = (1+sqrt(5))/2;
        double w = (1-sqrt(5))/2;
        unsigned int num = (pow(a,n)-pow(w,n))/sqrt(5);
        return num; 
    }
};
