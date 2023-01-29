https://www.codechef.com/problems/BLACKJACK




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b;
	    cin >> a >> b;
	    int k = 21 - a - b;
	    (k < 11) ? cout << k : cout << -1;
	    cout << endl;
	}
	return 0;
}