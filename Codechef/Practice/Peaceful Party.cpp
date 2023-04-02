https://www.codechef.com/problems/MAYOR_PARTY




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    cout << max(b,a+c) << endl;
	}
	return 0;
}