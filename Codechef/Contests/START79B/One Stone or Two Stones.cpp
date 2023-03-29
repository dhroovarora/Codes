https://www.codechef.com/START79B/problems/ONEORTWO




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    (x > y) ? (x-y > 1) ? cout << "CHEF" : (x%2==0) ? cout << "CHEF" : cout << "CHEFINA" :(x < y) ? (y-x >1) ? cout << "CHEFINA" : (y%2==0) ? cout << "CHEF" : cout << "CHEFINA" : (x%2) ? cout << "CHEF" : cout << "CHEFINA";
	    cout << endl;
	}
	return 0;
}