https://www.codechef.com/problems/KEPLERSLAW




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    float a,b,c,d;
	    cin >> a >> b >> c >> d;
	    ((a*a)/(c*c*c) == (b*b)/(d*d*d)) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}