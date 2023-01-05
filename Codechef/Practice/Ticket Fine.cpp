https://www.codechef.com/problems/TCKTFINE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,p,q;
	    cin >> x >> p >> q;
	    cout << x * (p-q) << endl;
	}
	return 0;
}
