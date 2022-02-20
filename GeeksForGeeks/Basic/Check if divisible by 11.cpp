#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int divisibleBy11 (string S)
	{
	    // Your Code Here
	    long long ans=0;
        int digit=0;
        for(int i=0;i<S.size();i++){
            digit=S[i]-'0';
            ans=ans*10+digit;
            ans=ans%11;
        }
        if(ans==0){
            return 1;
        }else{
            return 0;
        }
	}
};

// { Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.divisibleBy11 (s) << endl;
	}
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends