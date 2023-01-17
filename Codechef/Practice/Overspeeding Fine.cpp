https://www.codechef.com/problems/FINE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    (x <= 70) ? cout << 0 : (x<=100) ? cout << 500 : cout << 2000;
	    cout << endl;
	}
	return 0;
}
