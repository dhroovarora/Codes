https://www.codechef.com/problems/MINCARS




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    (n%4==0) ? cout << n/4 : cout << n/4 + 1;
	    cout << endl;
	}
	return 0;
}