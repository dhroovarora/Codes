https://www.codechef.com/problems/GDTURN




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    (x + y > 6) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}