https://www.codechef.com/problems/CANDYSTORE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    (y > x) ? cout << (y-x)*2 + x : cout << y;
	    cout << endl;
	}
	return 0;
}