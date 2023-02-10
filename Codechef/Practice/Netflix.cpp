https://www.codechef.com/problems/NETFLIX




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c,x;
	    cin >> a >> b >> c >> x;
	    (a + b >= x || b + c >= x || a + c >= x) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}