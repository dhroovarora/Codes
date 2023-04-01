https://www.codechef.com/problems/COMPCAND




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,k;
	    cin >> n >> k;
	    (n%k) ? cout << -1 : cout << n/k;
	    cout << endl;
	}
	return 0;
}