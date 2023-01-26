https://www.codechef.com/problems/TRANSFORM




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    (x%3==0) ? cout << "NORMAL" : (x%3==1) ? cout << "HUGE" : cout << "SMALL";
	    cout << endl;
	}
	return 0;
}