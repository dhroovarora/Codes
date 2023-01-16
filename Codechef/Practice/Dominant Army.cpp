https://www.codechef.com/problems/DOMINANT




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    ( a > b + c) ? cout << "Yes" : ( b > a + c) ? cout << "Yes" : (c > a + b) ? cout << "Yes" : cout << "No";
	    cout << endl;
	}
	return 0;
}
