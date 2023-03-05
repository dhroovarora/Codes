https://www.codechef.com/problems/CARRYGOLD




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x,y;
	    cin >> n >> x >> y;
	    (y*(n+1) >= x) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}