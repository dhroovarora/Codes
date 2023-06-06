https://www.codechef.com/problems/WATERFILLING




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    ((a == 0 && b == 0) || (b == 0 && c == 0) || (a == 0 && c == 0)) ? cout << "Water filling time" : cout << "Not now";
	    cout << endl;
	}
	return 0;
}