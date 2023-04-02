https://www.codechef.com/problems/CHFINTRO




#include <iostream>
using namespace std;

int main() {
	// your code goes her	int t;
	int n,r;
	cin >> n >> r;
	while(n--){
	    int R;
	    cin >> R;
	    (R < r) ? cout << "Bad boi" : cout << "Good boi";
	    cout << endl;
	}
	return 0;
}