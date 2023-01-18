https://www.codechef.com/problems/SUBSCRIBE_




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	    cin >> n >> x;
	    (n%6) ? cout << (n/6 + 1)*x : cout << n/6 * x;
	    cout << endl;
	}
	return 0;
}
