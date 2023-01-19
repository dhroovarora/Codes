https://www.codechef.com/problems/SALESEASON




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    (x < 100 ) ? cout << x : (x <= 1000) ? cout << x - 25 : (x <= 5000) ? cout << x - 100 : cout << x - 500;
	    cout << endl;
	}
	return 0;
}