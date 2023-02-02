https://www.codechef.com/problems/READPAGES




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x,y;
	    cin >> n >> x >> y;
	    (x*y >= n) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}