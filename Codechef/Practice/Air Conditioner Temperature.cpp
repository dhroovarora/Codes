https://www.codechef.com/problems/ACTEMP




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    (a <= b && c <= b) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}
