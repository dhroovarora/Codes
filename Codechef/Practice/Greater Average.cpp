https://www.codechef.com/problems/AVGPROBLEM




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    ((a + b) > 2*c) ? cout <<"Yes" : cout << "No" ;
	     cout << endl;
	}
	return 0;
}
