/*
  problem name : Maximum Number of Words Found in Sentences
*/
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        vector<int> tot;
        for (int i = 0;i != sentences.size(); i++)
        {
            int l = sentences[i].length();
            tot.push_back(0);
            for(int j = 0; j < l; j++)
            {
                if(sentences[i][j] == ' ')
                {
                    tot[i]++;
                }
            }
            tot[i]++;
        }
        return *max_element(tot.begin(), tot.end());
    }
};
