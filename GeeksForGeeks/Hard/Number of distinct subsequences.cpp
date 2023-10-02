https://practice.geeksforgeeks.org/problems/number-of-distinct-subsequences0909/1




class Solution{
  public:	
	int distinctSubsequences(string s)
	{
	   int n=s.size();
	   int k= 1e9+7;
	   unordered_map<char,long long int>u;
	   for(int i=n-1;i>=0;i--){
	       long long int a=0;
	       for(auto x:u)a=(a+x.second)%k;
	       u[s[i]]=a+ (u.find(s[i])!=u.end());
	   }
	   long long int ans=0;
	   for(auto x:u)ans=(ans+ x.second)%k;
	   int a=ans+1;
	   return a;
	}
};