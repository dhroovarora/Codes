https://www.codechef.com/problems/MINCOINS




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    (x%5==0) ? (x%10==0) ? cout << x/10 : cout << x/10 + 1 : cout << -1;
	    cout << endl;
	}
	return 0;
}