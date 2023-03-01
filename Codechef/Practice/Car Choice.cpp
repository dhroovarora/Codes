https://www.codechef.com/problems/CARCHOICE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    float a,b,c,d;
	    cin >> a >> b >> c >> d;
	    (c/a < d/b)  ? cout << -1 : (c/a > d/b) ? cout << 1 : cout << 0;
	    cout << endl;
	}
	return 0;
}