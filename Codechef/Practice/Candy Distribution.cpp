https://www.codechef.com/problems/CANDYDIST




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,m;
	    cin >> n >> m;
	    (n%m) ? cout << "No" :((n/m)%2) ? cout << "No" :  cout << "Yes";
	    cout << endl;
	}
	return 0;
}