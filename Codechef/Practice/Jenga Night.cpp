https://www.codechef.com/problems/JENGA




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	    cin >> n >> x;
	    (x % n == 0) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}