https://www.codechef.com/problems/BETDEAL




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b;
	    cin >> a >> b;
	    (b < 50 || (2*(b-50) < a)) ? cout << "FIRST" : (2*(b-50) == a) ? cout << "BOTH" : cout << "SECOND";
	    cout << endl;
	}
	return 0;
}