https://www.codechef.com/problems/COMPLEXITY




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    string ans = (x>y) ? "Yes" : "No";
	    cout << ans << endl;
	}
	return 0;
}
