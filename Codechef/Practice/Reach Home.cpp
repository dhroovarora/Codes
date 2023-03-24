https://www.codechef.com/problems/REACH_HOME




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    (5*x >= y) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}