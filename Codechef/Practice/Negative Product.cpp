https://www.codechef.com/problems/NEGPROD




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    (a*b < 0 || b*c < 0 || a*c < 0) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}