https://www.codechef.com/problems/PRESENTS




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    cout << (n/5)*4 + n%5 << endl;
	}
	return 0;
}