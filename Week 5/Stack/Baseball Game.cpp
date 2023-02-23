/*
  problem name : Baseball Game
*/
class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack <int> x;
        for (auto i : operations)
        {
            if (i == "C") x.pop();
            else if(i == "D")
            {
                int z = x.top();
                x.pop();
                x.push(z);
                x.push(z*2);
            }
            else if(i == "+")
            {
                int z = x.top();
                x.pop();
                int t = x.top();
                int f = z + t;
                x.push(z);
                x.push(f);
            }
            else
            {
                int z = stoi(i);
                x.push(z);
            }
        }
        int tot = 0;
        while (!x.empty())
        {
            tot += x.top();
            x.pop();
        }
        return tot;
    }
};
