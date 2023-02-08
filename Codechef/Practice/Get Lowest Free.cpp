https://www.codechef.com/problems/SALE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int  a,b,c;
	    cin >> a >> b >> c;
	    (a > b) ? (a > c) ? (b > c) ? cout << a + b : cout << a + c : cout << a + c : (b > c) ? (a > c) ? cout << a + b : cout << b + c : cout << b + c;
	    cout << endl;
	}
	return 0;
}