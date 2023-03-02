https://www.codechef.com/problems/ODDSEVENS




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b;
	    cin >> a >> b;
	    ((a+b)%2) ? cout << "Alice" : cout << "Bob";
	    cout << endl;
	}
	return 0;
}