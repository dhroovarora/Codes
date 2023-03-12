https://www.codechef.com/problems/VDATES




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int d,l,r;
	    cin >> d >> l >> r;
	    (d >= l && d <= r) ? cout << "Take second dose now " : (d < l) ? cout << "Too Early" : cout << "Too Late";
	    cout << endl;
	}
	return 0;
}