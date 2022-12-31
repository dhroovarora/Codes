https://www.codechef.com/problems/TASTEDEC




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    string ans = (2*x > 5*y) ? "Chocolate" : (2*x < 5*y) ? "Candy" : "Either";
	    cout << ans << endl;
	}
	return 0;
}
