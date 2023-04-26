https://www.codechef.com/problems/CSTOCK




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    double s,a,b,c;
	    cin >> s >> a >> b >> c;
	    s += (c*s)/100;
	    (s >= a && s <= b) ? cout << "Yes" : cout << "No";
	    cout << endl;
	}
	return 0;
}