https://www.codechef.com/problems/ONEMORE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    (x>24) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}