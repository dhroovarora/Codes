https://www.codechef.com/problems/TVDISC




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c,d;
	    cin >> a >> b >> c >> d;
	    ((a-c) > (b-d)) ? cout << "Second" : ((a-c) == (b-d)) ? cout << "Any" : cout << "First";
	    cout << endl;
	}
	return 0;
}
