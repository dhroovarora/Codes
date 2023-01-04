https://leetcode.com/problems/minimum-rounds-to-complete-all-tasks/description/




class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> m;
        for(int i=0;i<tasks.size();i++)
            m[tasks[i]]++;
        int ans = 0;
        for(auto i:m){
            if(i.second == 1)
                return -1;
            if(i.second >= 3){
                if(i.second % 3 == 0)
                    ans++;
                while(i.second > 4){
                    i.second -= 3;
                    ans++;
                }
                if(i.second == 4)
                    ans += 2;
                if(i.second == 2)
                    ans++;
            }
            else{
                ans++;
            }
        }
        return ans;
    }
};