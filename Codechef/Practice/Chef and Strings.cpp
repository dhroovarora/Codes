https://www.codechef.com/problems/CHEFSTR1




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    long long ans = 0;
	    int k;
	    cin >> k;
	    int prev = k;
	    for(int i=1;i<n;i++){
	        cin >> k;
	        ans += ( abs(k - prev) - 1);
	        prev = k;
	    }
	    cout << ans << endl;
	}
	return 0;
}