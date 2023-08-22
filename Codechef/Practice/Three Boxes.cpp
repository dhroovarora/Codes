https://www.codechef.com/problems/THREEBOX




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c,d;
	    cin >> a >> b >> c >> d;
	    (a+b+c <= d) ? cout << 1 : (a+b<=d) ? cout << 2 : cout << 3;
	    cout << endl;
	}
	return 0;
}