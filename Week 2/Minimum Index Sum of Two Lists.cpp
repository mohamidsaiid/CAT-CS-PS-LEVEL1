/*
Problem Name : Minimum Index Sum of Two Lists
*/
class Solution {
public:
    vector<string> findRestaurant(const vector<string>& list1, const vector<string>& list2) {
        
        unordered_map<string, int> to_index;
        
        for(int i = 0; i < list1.size(); ++i)
            if(to_index.find(list1[i]) == to_index.end())
                to_index[list1[i]] = i;
        
        int min_val = 1e9;
        for(int i = 0; i < list2.size(); ++i)
            if(to_index.find(list2[i]) != to_index.end())
                min_val = min(min_val, to_index[list2[i]] + i);
        
        vector<string> ret;
        for(int i = 0; i < list2.size(); ++i)
            if(to_index.find(list2[i]) != to_index.end() && i + to_index[list2[i]] == min_val)
                ret.emplace_back(list2[i]);
        
        return ret;
    }
};
