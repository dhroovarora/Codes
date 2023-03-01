https://www.codechef.com/problems/WHICHDIV




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int r;
	    cin >> r;
	    (r >= 2000) ? cout << "1" : (r >= 1600) ? cout << "2" : cout << "3";
	    cout <<endl;
	}
	return 0;
}