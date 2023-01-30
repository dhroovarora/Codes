https://www.codechef.com/problems/WGHTS




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int w,x,y,z;
	    cin >> w >> x >> y >> z;
	    (w == x || w == y || w == z || w == x + y || w == x + z || w == y + z || w == x + y + z) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}