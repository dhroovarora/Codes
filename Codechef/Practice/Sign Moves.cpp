https://www.codechef.com/problems/SIGNMOVE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    (n%2) ? cout << (-1)*(n+1)/2 : cout << (n+1)/2 ;
	    cout << endl;
	}
	return 0;
}