https://www.codechef.com/problems/CRICMATCH




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,m;
	    cin >> n >> m;
	    (m*6*6 >= n) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}