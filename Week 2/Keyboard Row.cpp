/*
Problem Name : Keyboard Row
*/

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        const char first_char[]  = "qwertyuiop"; const int first_len = sizeof(first_char);
        const char second_char[] = "asdfghjkl"; const int second_len = sizeof(second_char);
        const char third_char[]  = "zxcvbnm"; const int third_len = sizeof(third_char);
        
        vector<string> ret;
        
        for(auto &u : words)
        {
            bool first = false;
            bool second = false;
            bool third = false;
            
            #define contains(x, y) find(x, x + y, v) != x + y
            for(auto v : u)
                if(contains(first_char, first_len))
                    first = true;
                else if(contains(second_char, second_len))
                    second = true;
                else if(contains(third_char, third_len))
                    third = true;
           
            if(char(first) + second + third == 1)
                ret.push_back(u);
        }
        
        return ret;
    }
};
