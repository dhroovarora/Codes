https://leetcode.com/contest/weekly-contest-361/problems/minimum-operations-to-make-a-special-number/




class Solution {
public:
    int minimumOperations(string num) {
        int n = num.size() - 1;
        int ans = 0;
        bool flag5 = 0 , flag0 = 0;
        for(int i=n;i>=0;i--){
            if(num[i] == '5'){
                if(flag0){
                    if(flag5)
                        return ans + 1;
                    return ans;
                }
                if(flag5)
                    ++ans;
                flag5 = 1;
            }
            else if(num[i] == '0'){
                if(flag0){
                    if(flag5)
                        return ans + 1;
                    return ans;
                }
                flag0 = 1;
            }
            else if(num[i] == '2' || num[i] == '7'){
                if(flag5){
                    if(flag0)
                        return ans + 1;
                    return ans;
                }
                ++ans;
            }
            else{
                ++ans;
            }
        }
        if(flag5)
            return ans + 1;
        return ans;
    }
};