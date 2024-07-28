https://www.geeksforgeeks.org/problems/remove-duplicates3034/1




class Solution{
    public:	
	    string removeDups(string S) {  
            string ans="";
            unordered_map<char,int>m;
            for(int i=0;i<S.size();i++){
                m[S[i]]++;
            if(m[S[i]]==1)
                ans+=S[i];
            }
            return ans;
        }
};