https://www.geeksforgeeks.org/problems/smallest-window-containing-0-1-and-2--170637/1




class Solution {
  public:
    int getShortestLength(vector<int> &v){
        int len = max({v[0], v[1], v[2]}) - min({v[0], v[1], v[2]}) + 1;
        return len;
    }
    
    int smallestSubstring(string s) {
        int len = INT_MAX;
        
        vector<int> v(3,-1);
        
        int n = s.length();
        
        for(int i=0;i<n;i++){
            if(s[i]>='0' && s[i]<='2') v[s[i]-'0']=i;
            
            if(v[0]!=-1 && v[1]!=-1 && v[2]!=-1){ 
                len = min(len, getShortestLength(v));
            }
        }
        
        return len==INT_MAX ? -1 : len;
    }
};