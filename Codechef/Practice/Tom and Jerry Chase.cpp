https://www.codechef.com/problems/JERRYCHASE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    (y > x) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}