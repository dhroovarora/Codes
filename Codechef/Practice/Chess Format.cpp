https://www.codechef.com/problems/CHSFORMT




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b;
	    cin >> a >> b;
	    (a + b) < 3 ? cout << 1 : (a + b) < 11 ? cout << 2 : (a + b) < 61 ? cout << 3 : cout << 4;
	    cout << endl;
 	}
	return 0;
}