https://www.codechef.com/problems/SEATNUMBER




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    (n < 11) ? cout << "Lower Double" : (n < 16) ? cout << "Lower Single" :(n < 26) ? cout << "Upper Double" : cout << "Upper Single";
	    cout << endl;
	}
	return 0;
}