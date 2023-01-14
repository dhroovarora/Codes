https://www.codechef.com/problems/COURSEREG




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,m,k;
	    cin >> n >> m >> k;
	    (n <= m-k) ? (cout << "Yes") : (cout << "No");
	    cout << endl;
	}
	return 0;
}