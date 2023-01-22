https://www.codechef.com/problems/BIRDFARM




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int X,Y,Z;
	    cin >> X >> Y >> Z;
	    (Z%X == 0 && Z%Y==0) ? cout << "ANY" : (Z%X == 0) ? cout << "CHICKEN" : (Z%Y==0) ? cout << "DUCK" : cout << "NONE";
	    cout << endl;
	}
	return 0;
}