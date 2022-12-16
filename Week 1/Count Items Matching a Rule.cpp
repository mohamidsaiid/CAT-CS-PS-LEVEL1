/*
Problem Name :Count Items Matching a Rule
*/

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count = 0;
        if(ruleKey == "type")
        {
            string x = ruleValue;
            for(int i = 0; i < items.size(); i++)
            {
                if(items[i][0] == x)
                {
                    count++;
                }
            }
            return count;
        }
        else if(ruleKey == "color")
        {
            string x = ruleValue;
            for(int i = 0; i < items.size(); i++)
            {
                if(items[i][1] == x)
                {
                    count++;
                }
            }
            return count;
        }
        else if(ruleKey == "name")
        {
            string x = ruleValue;
            for(int i = 0; i < items.size(); i++)
            {
                if(items[i][2] == x)
                {
                    count++;
                }
            }
            return count;
        }
        return 0;

    }
};
