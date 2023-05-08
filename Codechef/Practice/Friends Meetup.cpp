https://www.codechef.com/problems/FRIMEET




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    (x < y) ? cout << "NO" : cout << "YES";
	    cout << endl;
	}
	return 0;
}