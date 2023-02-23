/*
  problem name : Number of Students Unable to Eat Lunch
*/
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>stu;
        queue<int>sands;
        for (auto i : students) stu.push(i);
        for (auto i : sandwiches) sands.push(i);
        int i = 0;
        while (!stu.empty())
        {
            if (stu.front() == sands.front()) 
            {
                stu.pop();
                sands.pop();
            }
            else
            {
                int temp = stu.front();
                stu.pop();
                stu.push(temp);
            }
            if (i > 500) break;
            i++;
        }
        return stu.size();
    }
};
