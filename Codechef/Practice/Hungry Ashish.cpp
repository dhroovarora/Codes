https://www.codechef.com/problems/PIZZA_BURGER




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    (b <= a) ? cout << "PIZZA" : (c <= a) ? cout << "BURGER" : cout << "NOTHING";
	    cout << endl;
	}
	return 0;
}