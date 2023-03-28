https://www.codechef.com/problems/CHFSPL




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    (a > b) ? cout << a + max(b,c) : cout << b + max(a,c);
	    cout << endl;
	}
	return 0;
}