https://www.codechef.com/problems/MONOPOLY2




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c,d;
	    cin >> a >> b >> c >> d;
	    (a+b+c < d || a+b+d < c || a+c+d < b || b+c+d < a) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}