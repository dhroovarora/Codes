https://www.codechef.com/problems/CHFPROFIT




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,z;
	    cin >> x >> y >> z;
	    cout << (z-y)*x << endl;
	}
	return 0;
}