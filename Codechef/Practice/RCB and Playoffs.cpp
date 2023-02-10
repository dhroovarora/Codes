https://www.codechef.com/problems/RCBPLAY




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,z;
	    cin >> x >> y >> z;
	    (y-x <= 2*z) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}