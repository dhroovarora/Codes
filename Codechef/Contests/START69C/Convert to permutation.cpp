https://www.codechef.com/START69C/problems/PERMUTATION




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    int ans = 0;
	    for(int i=1;i<n+1;i++){
	        if(arr[i-1] > i){
	            ans = -1;
	            break;
	        }
	        else{
	            ans += i - arr[i-1];
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
