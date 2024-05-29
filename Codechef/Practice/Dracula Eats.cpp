https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEAT?tab=statement




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    --n;
	    if(n%7)
	        cout << n/7 + 1 << endl;
	    else
	        cout << n/7 << endl;
	}
	return 0;
}