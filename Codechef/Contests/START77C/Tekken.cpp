https://www.codechef.com/START77C/problems/TEKKEN




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    (a > abs(b-c)) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}