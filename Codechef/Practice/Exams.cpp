https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/EXAMCHEF?tab=statement




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,z;
	    cin >> x >> y >> z;
	    ((x*y)/2 < z) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}