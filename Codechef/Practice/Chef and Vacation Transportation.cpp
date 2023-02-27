https://www.codechef.com/problems/CHEFTRANS




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,z;
	    cin >> x >> y >> z;
	    (x + y > z) ? cout << "TRAIN" :(x+y < z) ? cout << "PLANEBUS" : cout << "EQUAL";
	    cout << endl;
	}
	return 0;
}