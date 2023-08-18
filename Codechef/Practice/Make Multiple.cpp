https://www.codechef.com/problems/MAKEMULTIPLE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b;
	    cin >> a >> b;
	    (b%a==0  || b>2*a) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}
