#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    int sumOfMinAbsDifferences(int arr[], int n)
    {   
        //code here.
        sort(arr,arr+n);
        int q=0;
        q += abs(arr[1]-arr[0]);
        q += abs(arr[n-2]-arr[n-1]) ;
        for(int i=1;i<n-1;i++){
            q = q + min(abs(arr[i] - (arr[i-1])),abs(arr[i] - (arr[i+1])));
        }
        return q;
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
		cout<<ob.sumOfMinAbsDifferences(a,n)<<endl;
	}
	return 0;
}  // } Driver Code Ends