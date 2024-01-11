https://www.geeksforgeeks.org/problems/remove-k-digits/1




class Solution {
  public:
    string removeKdigits(string S, int K) {
        stack<char> s;
        for(auto it: S){
            while(K && !s.empty() && s.top() > it){
                s.pop();
                --K;
            }
            if(s.empty() && it == '0')
                continue;
            s.push(it);
        }
        while(!s.empty() && K){
            s.pop();
            --K;
        }
        string ans = "";
        while(!s.empty()){
            ans += s.top();
            s.pop();
        }
        if(ans.size() == 0)
            return "0";
        reverse(ans.begin(),ans.end());
        return ans;
    }
};