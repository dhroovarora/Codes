https://www.codechef.com/problems/TWODISH




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,a,b,c;
	    cin >> n >> a >> b >> c;
	    (min(a+c,b) >= n) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}