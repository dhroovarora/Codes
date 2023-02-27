https://www.codechef.com/problems/VISA




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c,d,e,f;
	    cin >> a >> b >> c >> d >> e >> f;
	    (b >= a && d >= c && f <= e) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}