https://www.codechef.com/problems/DOREWARD




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    (x < 4) ? cout << "BRONZE" : (x < 7) ? cout << "SILVER" : cout << "GOLD";
	    cout << endl;
	}
	return 0;
}