https://leetcode.com/problems/distribute-candies-to-people/description/




class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        int p = 1;
        int i = 0;
        vector<int> ans(num_people,0);
        while(i<num_people && candies > 0){
            if(p <= candies){
                ans[i++] += p;
                candies -= p;
            }
            else{
                ans[i++] += candies;
                break;
            }
            if(i == num_people){
                i = 0;
            }
            p++;
        }
        return ans;
    }
};