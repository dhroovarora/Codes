https://www.codechef.com/problems/POLYBAGS




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    (n%10) ? cout << n/10 + 1 : cout << n/10;
	    cout << endl;
	}
	return 0;
}