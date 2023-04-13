https://www.codechef.com/problems/IPLTRSH




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,m;
	    cin >> n >> m;
	    cout << n - min(n,m) << endl;
	}
	return 0;
}