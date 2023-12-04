https://leetcode.com/problems/largest-3-same-digit-number-in-string/description/?envType=daily-question&envId=2023-12-04




class Solution {
public:
    string largestGoodInteger(string num) {
        int ans = -1;
        int n = num.size();
        for(int i=0;i<n-2;++i){
            int p = num[i] - '0';
            int c = 1;
            while(i<n-1 && num[i+1] - '0' == p && c < 3){
                ++i;
                ++c;
            }
            if(c==3){
                while(i<n-1 && num[i+1] - '0' == p)
                    ++i;
                ans = max(ans,p);
            }
        }
        if(ans == -1)
            return "";
        else if(ans == 0)
            return "000";
        return to_string(ans*111);
    }
};