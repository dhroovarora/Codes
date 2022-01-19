#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,n2;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int mx=arr[0];
	    int min=arr[0];
	    for(int i=1;i<n;i++)
	    {
	        if(mx<arr[i])
	        {
	            mx=arr[i];
	        }
	        if(min>arr[i])
	        {
	            min=arr[i];
	        }
	    }
	    cout<<mx<<" "<<min<<endl;
	}
	return 0;
}