/*
  problem name : Excel Sheet Column Title
*/
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string f = "";
        while (columnNumber != 0)
        {
            --columnNumber;
            f.insert(f.begin(),(char)(65 + columnNumber%26));
            columnNumber /= 26;
        }
        return f;
    }
};
