https://www.codechef.com/problems/RIGHTTHERE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	    cin >> n >> x;
	    (n <= x) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}