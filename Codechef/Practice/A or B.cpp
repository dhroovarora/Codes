https://www.codechef.com/problems/AORB




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    int a = 1500 - 6*x - 4*y;
	    int b = 1500 - 2*x - 6*y;
	    (a>b)? cout << a : cout << b;
	    cout << endl;
	}
	return 0;
}