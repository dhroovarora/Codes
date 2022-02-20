//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int multiply(int arr[], int n);


int main() {
	//code
	int t;
	cin>>t;
	while (t--)
	{
	    int n,sum1=0,sum2=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
	    cout << multiply(a, n) << endl;
	    
	}
	return 0;
}// } Driver Code Ends


//User function Template for C++

int multiply(int arr[], int n)
{
    // Complete the function
    int q = 0,w=0;
    if(n%2==0){
        for(int i=0;i<n/2;i++){
            q = q + arr[i];
            w = w + arr[n-i-1];
        }
    }
    else if(n==1){
        return 0;
    }
    else{
        w = arr[n-1];
        for(int i=0;i<n/2;i++){
            q = q + arr[i];
            w = w + arr[n-i-2];
        }
    }
    return q * w;
}