https://www.codechef.com/problems/FARFROMO




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x1,y1,x2,y2;
	    cin >> x1 >> y1 >> x2 >> y2;
	    (x1*x1 + y1*y1 > x2*x2 + y2*y2) ? cout << "ALEX" : (x1*x1 + y1*y1 < x2*x2 + y2*y2) ? cout << "BOB" : cout << "EQUAL";
	    cout << endl;
	}
	return 0;
}