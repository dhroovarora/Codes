https://www.codechef.com/problems/CANDIVIDE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    (n%3) ? cout << "NO" : cout << "YES";
	    cout << endl;
	}
	return 0;
}