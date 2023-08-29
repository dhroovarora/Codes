https://www.codechef.com/problems/THREDICE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    float x,y;
	    cin >> x >> y;
	    (x+y >=6) ? cout << 0 : cout << (6-x-y)/6;
	    cout << endl;
	}
	return 0;
}