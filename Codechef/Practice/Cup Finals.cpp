https://www.codechef.com/problems/CRICUP




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,d;
	    cin >> x >> y >> d;
	    (x >=y ) ? (x-y <= d) ? cout << "YES" : cout << "NO" : (y-x <= d) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}