https://www.codechef.com/problems/DATATYPE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	    cin >> n >> x;
	    cout << x % ( n + 1 ) << endl;
	}
	return 0;
}