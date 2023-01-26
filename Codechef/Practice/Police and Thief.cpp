https://www.codechef.com/problems/POLTHIEF




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    (x>y) ? cout << x-y : cout << y-x ;
	    cout << endl;
	}
	return 0;
}