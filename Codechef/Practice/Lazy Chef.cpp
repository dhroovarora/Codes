https://www.codechef.com/problems/LAZYCHF




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,m,d;
	    cin >> x >> m >> d;
	    (x*m < x + d) ? cout << x*m : cout << x + d;
	    cout << endl;
	}
	return 0;
}