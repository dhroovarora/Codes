https://www.codechef.com/problems/ODDSUMPAIR




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    ((a+b)%2 || (b+c)%2 || (a+c)%2 ) ? cout << "Yes" : cout << "No";
	    cout << endl;
	}
	return 0;
}
