https://www.codechef.com/problems/CCISLAND




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,r,e,d;
	    cin >> x >> y >> r >> e >> d;
	    (d <= min(x/r,y/e)) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}