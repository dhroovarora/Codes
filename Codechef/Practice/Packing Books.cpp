https://www.codechef.com/problems/BOOKPACK




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,z;
	    cin >> x >> y >> z;
	    (y%z) ? cout << x*(y/z + 1) : cout << x*(y/z);
	    cout << endl;
	}
	return 0;
}