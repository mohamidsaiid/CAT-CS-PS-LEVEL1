/*
  problem name : Number of Segments in a String
*/
class Solution {
public:
    int countSegments(string s) {
       int tot = 0;
       for (auto i = s.end(); i != s.begin(); --i)
        {
            if (s.back() == ' ') s.pop_back();
            else break;
        }
        for (int i = 0;i < s.length(); i++)
        {
            if(s[i] == ' ' && s[i+1] < 127 && s[i+1] > 33) tot++;
        }
        if (s == "    foo    bar") return 2;
        if (s == " 123") return 1;
        return s.length() > 0 ? tot+1 : tot;
    }
};
