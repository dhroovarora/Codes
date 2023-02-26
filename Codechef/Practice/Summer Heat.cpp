https://www.codechef.com/problems/COCONUT




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c,d;
	    cin >> a >> b >> c >> d;
	    cout << c/a + d/b << endl;
	}
	return 0;
}