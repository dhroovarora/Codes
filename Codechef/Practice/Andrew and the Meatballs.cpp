https://www.codechef.com/practice/course/sorting-cpp/CPPSOR01A/problems/AMMEAT?tab=statement




#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    ll n,m,ans = 0;
	    cin >> n >> m;
	    ll p[n];
	    bool flag = 0;
	    for(ll i=0;i<n;++i)
	        cin >> p[i];
	    sort(p,p+n,greater<ll>());
	    for(ll i=0;i<n;++i){
	        m -= p[i];
	        ++ans;
	        if(m <= 0){
	            flag = 1;
	            break;
	        }
	    }
	    (flag) ? cout << ans : cout << -1;
	    cout << endl;
	}
	return 0;
}