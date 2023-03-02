https://www.codechef.com/problems/DRUNKALK




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int k;
	    cin >> k;
	    (k%2) ? cout << k + 2: cout << k;
	    cout << endl;
	}
	return 0;
}
