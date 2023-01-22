https://www.codechef.com/problems/TEA




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,z;
	    cin >> x >> y >> z;
	    (x <= y) ? cout << z : (x%y==0) ? cout << x/y * z : cout << x/y * z + z;
	    cout << endl;
	}
	return 0;
}
