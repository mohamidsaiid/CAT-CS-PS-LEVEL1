/*
  problem name : Valid Parentheses
*/
class Solution {
public:
    bool isValid(string s) {
        stack<char> x;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                x.push(s[i]); 
            }
        else if (!x.empty() && ((s[i] == ')' && x.top() == '(') || (s[i] == ']' && x.top() == '[') || (s[i] == '}' && x.top() == '{')))
            {
                x.pop();
            }
            else return false;
        }
        return x.empty();
    }
};
