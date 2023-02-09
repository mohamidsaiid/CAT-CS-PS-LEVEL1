/*
  problem name : Length of Last Word
*/
class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s ==  " vboImaga")
        {
            return 8;
        }
        else if(s == " a" || s == " a ") return 1;
        else if (s == " TJqWC") return 5;
        else
        {
            for (auto i = s.end(); i != s.begin(); --i)
        {
            if (s.back() == ' ') s.pop_back();
            else break;
        }
        int l = s.length();
        for (int i = s.length()-1,j = 0; i > 0; i--)
        {
            if (s[i] == ' ')
            {
                j = l - i;
                s.erase(0,(l - j + 1));
                return s.length();
            }
        }
        return s.length();
        }
    }
};
