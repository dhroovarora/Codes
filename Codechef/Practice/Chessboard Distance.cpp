https://www.codechef.com/problems/CHESSDIST




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x1,y1,x2,y2;
	    cin >> x1 >> y1 >> x2 >> y2;
	    (abs(x1 - x2) > abs(y1 - y2)) ? cout << abs(x1 - x2) : cout << abs(y1 - y2);
	    cout << endl;
	}
	return 0;
}