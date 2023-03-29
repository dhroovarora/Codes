https://www.codechef.com/START82B/problems/OPMIN




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
	    int mini = INT_MAX;
	    for(int i=0;i<n;i++){
	        mini = min(mini,a[i]);
	    }
	    int ans = 0;
	    for(int i=0;i<n;i++){
	        if(a[i] > mini)
	            ans++;
	    }
	    cout << ans << endl;
	}
	return 0;
}