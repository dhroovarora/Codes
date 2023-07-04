https://www.codechef.com/problems/FRUITS




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,m,k;
	    cin >> n >> m >> k;
	    int a = abs(n - m);
	    (a <= k) ? cout << 0 : cout << a - k;
	    cout << endl;
	}
	return 0;
}