https://www.codechef.com/problems/WATERCOOLER1




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,m;
	    cin >> x >> y >> m;
	    (x*m < y) ? cout << "Yes" : cout << "No";
	    cout << endl;
	}
	return 0;
}