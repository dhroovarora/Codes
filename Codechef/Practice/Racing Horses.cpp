https://www.codechef.com/practice/CPPSOR01A/problems/HORSES




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int s[n];
	    int ans = INT_MAX;
	    for(int i=0;i<n;++i)
	        cin >> s[i];
	    sort(s,s+n);
	    for(int i=0;i<n-1;++i){
	        ans = min(ans,s[i+1]-s[i]);
	    }
	    cout << ans << endl;
	}
	return 0;
}