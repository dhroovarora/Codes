https://www.codechef.com/problems/EXPERT




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    float x,y;
	    cin >> x >> y;
	    (y/x >= 0.5) ? cout << "Yes" : cout << "No";
	    cout << endl;
	}
	return 0;
}