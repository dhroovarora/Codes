https://www.codechef.com/problems/SUPCHEF




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int m,n,k;
	    cin >> m >> n >> k;
	    (n*k < m) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}