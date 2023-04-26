https://www.codechef.com/problems/THREEFR




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    (a + b == c || a + c == b || b + c == a) ? cout << "yes" : cout << "no";
	    cout << endl;
	}
	return 0;
}