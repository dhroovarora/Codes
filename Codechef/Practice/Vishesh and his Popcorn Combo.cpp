https://www.codechef.com/problems/POPCORN




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a1,a2,b1,b2,c1,c2;
	    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
	    int a = a1 + a2;
	    int b = b1 + b2;
	    int c = c1 + c2;
	    cout << max(a,max(b,c)) << endl;
	}
	return 0;
}