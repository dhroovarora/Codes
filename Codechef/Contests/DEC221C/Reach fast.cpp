https://www.codechef.com/problems/REACHFAST




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,k;
	    cin>>x>>y>>k;
	    int z;
	    if(x > y)
	        z = x - y;
	    else
	        z = y - x;
	    if(z %k ==0)
	        cout << z/k << endl;
	    else
	        cout << z/k + 1 << endl;
	}
	return 0;
}
