https://www.codechef.com/problems/SEVENRINGS




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	    cin >> n >> x;
	    (n*x > 9999 && n*x <= 99999) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}