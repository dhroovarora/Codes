https://www.codechef.com/START88C/problems/LARGESECOND




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin >> a[i];
	    sort(a,a+n);
	    int ans = a[n-1];
	    for(int i=n-2;i>=0;i--){
	        if(a[i] != ans){
	            ans += a[i];
	            break;
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}