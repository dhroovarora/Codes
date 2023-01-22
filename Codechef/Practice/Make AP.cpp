https://www.codechef.com/problems/MAKEAP




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,c;
	    cin >> a >> c;
	    ((a+c)%2) ? cout << -1 : cout << (a+c)/2;
	    cout << endl;
	}
	return 0;
}
