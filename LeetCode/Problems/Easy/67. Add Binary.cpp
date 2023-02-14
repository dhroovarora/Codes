https://leetcode.com/problems/add-binary/description/




class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int n = a.size() - 1;
        int m = b.size() - 1;
        char c = '0';
        while(n>=0 && m>=0){
            if(a[n] == '1' && b[m] == '1'){
                if(c == '1'){
                    ans += '1';
                }
                else{
                    c = '1';
                    ans += '0';
                }
            }
            else if(c == '1'){
                if(a[n] == '1' || b[m] == '1')
                    ans += '0';
                else{
                    ans += '1';
                    c = '0';
                }
            }
            else{
                if(a[n] == '1' || b[m] == '1')
                    ans += '1';
                else
                    ans += '0';
            }
            n--;
            m--;
        }
        while(n >= 0){
            if(a[n] == '1'){
                if(c == '1'){
                    ans += '0';
                }
                else{
                    ans += '1';
                }
            }
            else{
                if(c == '1'){
                    ans += '1';
                    c = '0';
                }
                else{
                    ans += '0';
                }
            }
            n--;
        }
        while(m >= 0){
            if(b[m] == '1'){
                if(c == '1'){
                    ans += '0';
                }
                else{
                    ans += '1';
                }
            }
            else{
                if(c == '1'){
                    ans += '1';
                    c = '0';
                }
                else{
                    ans += '0';
                }
            }
            m--;
        }
        if(c == '1'){
            ans += '1';
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};