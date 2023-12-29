https://leetcode.com/problems/minimum-difficulty-of-a-job-schedule/?envType=daily-question&envId=2023-12-29




class Solution {
public:
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        int jobs = jobDifficulty.size();

        if (jobs < d) 
            return -1;

        int max_difficulty = *max_element(jobDifficulty.begin(), jobDifficulty.end()) + 1;

        vector<int> prv_day(jobs, max_difficulty), curr_day(jobs);
        for (int days = 0; days < d; ++days) {
            vector<int> stack;
            for (int i = days; i < jobs; i++) {
                if (i > 0)
                    curr_day[i] = prv_day[i - 1] + jobDifficulty[i];
                else 
                    curr_day[i] = jobDifficulty[i];
                while (!stack.empty() && jobDifficulty[stack.back()] <= jobDifficulty[i]) {
                    int j = stack.back(); 
                    stack.pop_back();
                    curr_day[i] = min(curr_day[i], curr_day[j] - jobDifficulty[j] + jobDifficulty[i]);
                }
                if (!stack.empty()) {
                    curr_day[i] = min(curr_day[i], curr_day[stack.back()]);
                }
                stack.push_back(i);
            }
            swap(prv_day, curr_day);
        }
        return prv_day[jobs - 1];
    }
};