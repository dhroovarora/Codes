https://www.codechef.com/problems/CREDITS




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    (x > 65) ? cout << "Overload" : (x<35) ? cout << "Underload" : cout << "Normal";
	    cout << endl;
	}
	return 0;
}