https://www.codechef.com/START87B/problems/EXISTENCE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    long long int x,y;
	    cin >> x >> y;
	    (x*x*x*x + 4*y*y == 4*x*x*y) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}