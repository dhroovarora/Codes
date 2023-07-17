https://codechef.com/problems/EID




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin >> arr[i];
	    sort(arr,arr+n);
	    int ans = INT_MAX;
	    for(int i=0;i<n-1;i++)
	        ans = min(ans,arr[i+1] - arr[i]);
	    cout << ans << endl;
	}
	return 0;
}