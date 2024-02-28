https://www.codechef.com/problems/YETALICEBOB




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,a,b;
	    cin >> n >> a >> b;
	    if(n <= a || (a > b))
	        cout << "Alice";
	    else if(a==b)
	        (n%(a+1)) ? cout << "Alice" : cout << "Bob";
	    else
	        cout << "Bob";
	    cout << endl;
	}
}