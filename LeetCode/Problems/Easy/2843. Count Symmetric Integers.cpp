https://leetcode.com/contest/weekly-contest-361/problems/count-symmetric-integers/




class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ans = 0;
        for(int i=low;i<=high;i++){
            int c = 0;
            int p = i;
            while(p){
                ++c;
                p /= 10;
            }
            if(c%2)
                continue;
            else{
                int p = i;
                int d = c/2;
                int t = 0;
                while(d--){
                    t += p%10;
                    p /= 10;
                }
                d = c/2;
                while(d--){
                    t -= p%10;
                    p /= 10;
                }
                if(t == 0){
                    ++ans;
                }
            }
        }
        return ans;
    }
};