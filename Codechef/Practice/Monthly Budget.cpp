https://www.codechef.com/problems/BUDGET_




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    if(30*y <= x)
	        cout << "Yes" << endl;
	    else
	        cout << "No" << endl;
	}
	return 0;
}
