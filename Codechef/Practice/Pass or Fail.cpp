https://www.codechef.com/problems/PASSORFAIL




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x,p;
	    cin >> n >> x >> p;
	    (4*x - n >= p) ? cout << "PASS" : cout << "FAIL";
	    cout << endl;
	}
	return 0;
}