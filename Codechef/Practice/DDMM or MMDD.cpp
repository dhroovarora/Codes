https://www.codechef.com/problems/DDMMORMMDD




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    ((s[0] - '0')*10 + (s[1] - '0') <= 12) ? ((s[3] - '0')*10 + (s[4] - '0') <= 12) ? cout << "BOTH" : cout << "MM/DD/YYYY" : cout << "DD/MM/YYYY";
	    cout << endl;
	}
	return 0;
}