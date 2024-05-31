https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHOPRT?tab=statement




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b;
	    cin >> a >> b;
	    (a > b) ? cout << ">" : (a < b) ? cout << "<" : cout << "=";
	    cout << endl;
	}
	return 0;
}