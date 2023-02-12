https://www.codechef.com/problems/WATERCOOLER2




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    (y%x) ? cout << y/x : cout << (y-1)/x;
	    cout << endl;
	}
	return 0;
}