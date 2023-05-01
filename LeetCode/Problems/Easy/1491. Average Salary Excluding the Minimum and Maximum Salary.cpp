https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/description/




class Solution {
public:
    double average(vector<int>& salary) {
        double sum = 0;
        for(int i=0;i<salary.size();i++)
            sum += salary[i];
        return (sum - *max_element(salary.begin(),salary.end()) - *min_element(salary.begin(),salary.end())) / (salary.size() - 2);
    }
};