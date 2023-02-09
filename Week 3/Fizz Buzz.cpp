/*
  problem name : Fizz Buzz
*/
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> x;
        int y = 1;
        while(n--)
        {
            if(y % 3 == 0 && y % 5 == 0) x.push_back("FizzBuzz");
            else if(y % 3 == 0)  x.push_back("Fizz");
            else if(y % 5 == 0)  x.push_back("Buzz");
            else x.push_back(to_string(y));
            y++;
        }
        return x;
    }
};
