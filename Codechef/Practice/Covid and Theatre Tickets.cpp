https://www.codechef.com/problems/COVID_19




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,m;
	    cin >> n >> m;
	    cout << ((n+1)/2) * ((m+1)/2) << endl;
	}
	return 0;
}