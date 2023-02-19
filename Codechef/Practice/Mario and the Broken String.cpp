https://www.codechef.com/problems/BROKENSTRING




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    (s.substr(0,n/2) == s.substr(n/2,n/2)) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}