https://www.codechef.com/problems/ACCURACY




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    (x%3==0) ? cout << 0 : (x%3 == 1) ? cout << 2 : cout << 1 ;
	    cout << endl;
	}
	return 0;
}
