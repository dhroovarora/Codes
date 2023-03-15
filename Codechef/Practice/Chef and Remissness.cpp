https://www.codechef.com/problems/REMISS




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b;
	    cin >> a >> b;
	    (a > b) ? cout << a << " " : cout << b << " ";
	    cout << a + b << endl;
	}
	return 0;
}