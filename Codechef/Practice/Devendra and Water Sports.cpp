https://www.codechef.com/problems/DEVSPORTS




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int z,y,a,b,c;
	    cin >> z >> y >> a >> b >> c;
	    (z-y >= a + b + c) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}