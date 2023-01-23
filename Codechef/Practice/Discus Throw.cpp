https://www.codechef.com/problems/DISCUS




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    (a >= b) ? ( a >= c) ? cout << a : cout << c : ( b >= c) ? cout << b : cout << c;
	    cout << endl;
	}
	return 0;
}