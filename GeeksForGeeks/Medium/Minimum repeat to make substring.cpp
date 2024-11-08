https://www.geeksforgeeks.org/problems/minimum-times-a-has-to-be-repeated-such-that-b-is-a-substring-of-it--170645/1




class Solution {
  public:
    int minRepeats(string& s1, string& s2) {
        // code here
        int ans = 1 , n1 = s1.size() ;string s = s1;
        while(n1<s2.size()){
            ans++;
            n1+=s1.size();
            s+=s1;
        }
        if(s.find(s2)!=string::npos)return ans;
        ans++;
        s+=s1;
        if(s.find(s2)!=string::npos)return ans;
        return -1;
    }
};