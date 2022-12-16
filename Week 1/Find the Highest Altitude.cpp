/*
Problem Name : Find the Highest Altitude
*/

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector <int> alt;
        alt.push_back(0);
        alt.push_back(gain[0]);
        for(int i = 1; i < gain.size(); i++)
        {
            alt.push_back(gain[i] + alt[i]);
        }
        int maxx = *max_element(alt.begin(),alt.end());
        return maxx;
    }
};
