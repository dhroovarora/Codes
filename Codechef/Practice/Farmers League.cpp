https://www.codechef.com/problems/LEAGUE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    cout << 3 * (n-1 - (n-1)/2) << endl;
	}
	return 0;
}