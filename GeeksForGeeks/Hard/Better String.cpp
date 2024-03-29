https://www.geeksforgeeks.org/problems/better-string/1




class Solution {
private:
    int helper(string S){
        int a[26] = {};
        for(char c : S)
            a[c - 'a'] = accumulate(begin(a),end(a),1);
        return accumulate(begin(a),end(a),0);
    }
public:
    string betterString(string s1, string s2){
        int cnt1 = helper(s1) , cnt2 = helper(s2);
        if(cnt1 == cnt2) return s1;
        return cnt1 > cnt2 ? s1 : s2;
    }
};