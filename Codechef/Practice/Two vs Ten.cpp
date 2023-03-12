https://www.codechef.com/problems/TWOVSTEN




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    x%10==0 ? cout << 0 : x%5==0 ? cout << 1 : cout << -1;
	    cout << endl;
	}
	return 0;
}