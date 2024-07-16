https://www.geeksforgeeks.org/problems/remaining-string3515/1




class Solution {
  public:

    string printString(string s, char ch, int count) {
        // Your code goes here
        int l=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]==ch){
                count--;
                if(count==0){
                l=i;
            }
            }
            
        }
        string t;
        if(l==-1||l==s.size()-1){
            return "";
        }
        else{
            for(int i=l+1;i<s.size();i++){
                t+=s[i];
            }
        }
        return t;
    }
};