https://www.codechef.com/problems/FINDK3




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,z;
	    cin >> x >> y >> z;
	    if((y*z)%x == 0)
	        cout << y*z << " " << x << endl;
	    else if((x*z)%y == 0)
	        cout << x*z << " " << y << endl;
	    else if((x*y)%z == 0)
	        cout << x*y << " " << z << endl;
	    else
	        cout << -1 << endl;
	}
	return 0;
}