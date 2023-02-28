/*
  problem name : Sqrt(x)
*/
class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;
        int cnt = 1;
        long long inti = 3;
        long long temp = 3;
        //if (inti == x) return ++cnt;
        while (true)
        {
            if (inti == x)  return cnt;
            else if (inti > x) return cnt;
            temp += 2;
            inti += temp;
            cnt++;
        }
        return 0;
    }
};
