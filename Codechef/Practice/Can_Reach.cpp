https://www.codechef.com/problems/CAN_REACH




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,k;
	    cin >> x >> y >> k;
	    (x%k == 0 && y%k == 0) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}