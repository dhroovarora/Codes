https://www.codechef.com/problems/FLOW017




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    (a > b) ? (a > c) ? (b > c) ? cout << b : cout << c : cout << a : (b > c) ? (a > c) ? cout << a : cout << c : cout << b;
	    cout << endl;
	}
	return 0;
}