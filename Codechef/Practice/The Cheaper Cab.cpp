https://www.codechef.com/problems/CABS




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    if( x < y)
	        cout << "FIRST";
	    else if ( y  < x)
	        cout << "SECOND";
	    else
	        cout << "ANY";
	    cout << endl;
	}
	return 0;
}
