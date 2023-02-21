/*
  problem name : Backspace String Compare
*/
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string x = " ";
        string y = " ";
        for (auto i : s)
        {
            if (i == '#' && !x.empty())
            {
                x.pop_back();
            }
            else
            {
                x.push_back(i);
            }
            if (x.empty()) x += " ";
        }
        for (auto i : t)
        {
            if (i == '#' && !y.empty())
            {
                y.pop_back();
            }
            else
            {
                y.push_back(i);
            }
            if (y.empty()) y += " ";
        }
        return (x == y);
    }
};
