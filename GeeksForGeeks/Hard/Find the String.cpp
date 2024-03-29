https://www.geeksforgeeks.org/problems/find-the-string/1




class Solution
{
public:
    string findString(int n, int k) {
       string ans="";
       unordered_set<string>st;
       for(int i=0;i<n;i++)ans+='0';
       st.insert(ans);
       string temp;
       while(1){
           for(int i=k-1;i>=0;i--){
               temp=ans.substr(ans.size()-n+1,n-1);
               temp+=to_string(i);
               if(st.find(temp)==st.end()){
                   ans+=to_string(i);
                   i=k;
                   st.insert(temp);
               }
           }
           return ans;
       }
       return ans;
    }
};