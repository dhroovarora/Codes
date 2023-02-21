https://www.codechef.com/problems/EQLZING



#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b;
	    cin >> a >> b;
	    (abs(a-b)%2) ? cout << "NO" : cout << "YES";
	    cout << endl;
	}
	return 0;
}