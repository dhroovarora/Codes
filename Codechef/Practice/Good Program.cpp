https://www.codechef.com/problems/NIBBLE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    (n%4) ? cout << "NOT GOOD" : cout << "GOOD";
	    cout << endl;
	}
	return 0;
}