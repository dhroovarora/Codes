https://www.codechef.com/problems/MISSP




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int ans = 0;
	    for(int i=0;i<n;i++){
	        int k;
	        cin >> k;
	        ans ^= k;
	    }
	    cout << ans << endl;
	}
	return 0;
}
