https://www.codechef.com/problems/POOK




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    (n==2 || n==3) ? cout << n-1 : cout << n;
	    cout << endl;
	}
	return 0;
}