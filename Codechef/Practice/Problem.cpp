https://www.codechef.com/problems/PR0BLEM




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,m;
	    cin >> n >> m;
	    (abs(n-m)%2) ? cout << "NO" : cout << "YES";
	    cout << endl;
	}
	return 0;
}