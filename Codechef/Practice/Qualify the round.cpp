https://www.codechef.com/problems/QUALIFY




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,a,b;
	    cin >> x >> a >> b;
	    (x <= a + 2*b) ? cout << "Qualify" : cout << "NotQualify";
	    cout << endl;
	}
	return 0;
}
