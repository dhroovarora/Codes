https://www.codechef.com/problems/PSGRADE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c,k,A,B,C;
	    cin >> a >> b >> c >> k >> A >> B >> C;
	    (A >= a && B >= b && C >= c && k <= A + B + C) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}