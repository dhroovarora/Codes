https://www.codechef.com/problems/PATHPAR




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,k;
	    cin >> n >> k;
	    if(n%2 && !k%2)
	        cout << "NO";
	    else
	        cout << "YES";
	    cout << endl;
	}
	return 0;
}