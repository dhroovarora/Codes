https://www.codechef.com/problems/TYRES




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    (n%4 == 2 || n%4 == 3) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}