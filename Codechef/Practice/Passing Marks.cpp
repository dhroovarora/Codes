https://www.codechef.com/problems/CUTOFF




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	    cin >> n >> x;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin >> arr[i];
	    
	    sort(arr,arr+n);
	    cout << arr[n-x] - 1 << endl;
	}
	return 0;
}