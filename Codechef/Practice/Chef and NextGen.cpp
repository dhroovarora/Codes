https://www.codechef.com/problems/HELIUM3




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,x,y;
	    cin >> a >> b >>  x >> y;
	    (x*y >= a*b) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}