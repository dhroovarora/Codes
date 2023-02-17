https://www.codechef.com/problems/HARDBET




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    (a < b) ? ( a < c) ? cout << "Draw" : (b < c) ? cout << "Bob" : cout << "Alice" : (b < c) ? cout << "Bob" : (a < c) ? cout << "Draw" : cout << "Alice";
	    cout << endl;
	}
	return 0;
}