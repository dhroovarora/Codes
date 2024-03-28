https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRAVELFAST?tab=statement




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    (x<y) ? cout << "BIKE" : (x>y) ? cout << "CAR" : cout << "SAME";
	    cout << endl;
	}
}