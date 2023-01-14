https://www.codechef.com/problems/BATTERYLOW




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    (x < 16) ? cout << "Yes" : cout << "No";
	    cout << endl;
	}
	return 0;
}
