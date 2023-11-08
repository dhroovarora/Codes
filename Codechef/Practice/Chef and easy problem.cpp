https://www.codechef.com/practice/course/sorting-cpp/CPPSOR01A/problems/CHEFA




#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin >> t;
	while(t--){
	    ll n;
	    cin >> n;
	    ll a[n];
	    for(ll i=0;i<n;++i){
	        cin >> a[i];
	    }
	    sort(a,a+n);
	    ll ans = 0;
	    for(ll i=n-1;i>=0; i-=2){
	        ans += a[i];
	    }
	    cout << ans << endl;
	}
	return 0;
}