/*
  Problem name : Excel Sheet Column Number
*/
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int t = 0;
        int l = columnTitle.length();
        int i = 0;
        for (int j = 0; j < columnTitle.length(); j++)
        {
            t += pow(26,l-1) * (columnTitle[i] - 'A' + 1);
            i++,l--;
        }
        return t;
    }
};
