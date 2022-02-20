#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
       //code here.
       int q=0,w=0;
       for(int i=0;i<n/2;i++)
       {
           q = q + a[i];
           w = w + a[n-i-1];
       }
       int s = q - w;
       if(s>0){
           return s;
       }
       else{
           return s* (-1);
       }
    }
};



// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.minValueToBalance(a,n)<<endl;
	}
	return 0;
}  // } Driver Code Ends