https://www.codechef.com/problems/ALTERADD




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b;
	    cin >> a >> b;
	    int i = 1;
	    b -= a;
	    (b%3 == 0 || b%3 == 1) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}