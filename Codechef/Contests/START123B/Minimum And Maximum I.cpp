https://www.codechef.com/problems/MINANDMAX




#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    uint64_t n;
	    cin >> n;
	    uint64_t q = n;
	    n /= 2;
	    n *= (n+1);
	    if(q%2){
	        q = (n+q/2+1);
	        cout << q;
	    }
	    else
	        cout << n;
	    cout << endl;
	}
	return 0;
}