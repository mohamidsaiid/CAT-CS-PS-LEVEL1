/*
  problem name : Valid Perfect Square
*/
class Solution {
public:
    bool isPerfectSquare(int num) {
        float x = sqrt(num);
        int y = sqrt(num);
        return (x-y) == 0;
    }
};
