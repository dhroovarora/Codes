https://www.codechef.com/practice/course/number-theory/INTNT01/problems/DIVIDEMAKEEQ?tab=statement




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
	    for(int i=0;i<n;++i)
	        cin >> a[i];
	    int q = a[0] , ans = 0;
	    for(int i=1;i<n;++i){
	        q = __gcd(q,a[i]);
	    }
	    for(int i=0;i<n;++i)
	        if(q != a[i])
	            ++ans;
	    cout << ans << endl;
	}
	return 0;
}