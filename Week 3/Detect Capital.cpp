/*
  problem name : Detect Capital
*/
class Solution {
public:
    bool detectCapitalUse(string word) {
        if (word.length() > 1)
        {
            if (word[0] >= 'A' && word[0] <= 'Z' && word[1]>= 'a' && word[1] <= 'z')
            {
                bool c = false;
                for (int i = 1; i < word.length(); i++)
                {
                    if (word[i] >= 'a' && word[i] <= 'z') c = true;
                    else {c = false;
                    break;} 
                }
                return c;
            }
            else if(word[0] >= 'A' && word[0] <= 'Z' && word[1]>= 'A' && word[1] <= 'Z')
            {
                bool c = false;
                for (int i = 1; i < word.length(); i++)
                {
                    if (word[i] >= 'A' && word[i] <= 'Z') c = true;
                    else {c = false;
                    break;} 
                }
                return c;
            }   
            else
            {
                bool c = false;
                for (int i = 1; i < word.length(); i++)
                {
                    if (word[i] >= 'a' && word[i] <= 'z') c = true;
                    else {c = false;
                    break;} 
                }
                return c;
            }
        }
        return true;
    }
};
