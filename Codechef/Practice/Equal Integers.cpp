https://www.codechef.com/problems/INCREAR




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    x > y ? (x-y)%2 == 0 ? cout << (x-y)/2 : cout << ((x-y+1)/2) + 1 : cout << y-x;
	    cout << endl;
	}
	return 0;
}