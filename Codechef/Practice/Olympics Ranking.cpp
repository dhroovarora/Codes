https://www.codechef.com/problems/OLYRANK




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c,d,e,f;
	    cin >> a >> b >> c >> d >> e >> f;
	    (a+b+c > d+e+f) ? cout << 1 : cout << 2;
	    cout << endl;
	}
	return 0;
}