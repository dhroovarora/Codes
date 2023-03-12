https://www.codechef.com/problems/MINDAYSRET




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,k;
	    cin >> n >> k;
	    (n%k) ? cout << n/k + 1 : cout << n/k;
	    cout << endl;
	}
	return 0;
}