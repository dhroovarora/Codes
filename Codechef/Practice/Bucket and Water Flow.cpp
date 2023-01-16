https://www.codechef.com/problems/WATERFLOW




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int w,x,y,z;
	    cin >> w >> x >> y >> z;
	    (x - w < y*z) ? cout << "overFlow" : (x - w == (y*z)) ? cout << "filled" : cout << "Unfilled";
	    cout << endl;
	}
	return 0;
}
