/*
  problem name : Reverse String
*/
class Solution {
public:
    void reverseString(vector<char>& s) {
        string x = "";
        for (int i = s.size() - 1; i >= 0; i--)
        {
            x.push_back(s[i]);
        }
        s.clear();
        for (int i = 0; i < x.length(); i++) s.push_back(x[i]);
    }
};
