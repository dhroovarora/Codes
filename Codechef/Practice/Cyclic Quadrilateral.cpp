https://www.codechef.com/problems/CYCLICQD




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c,d;
	    cin >> a >> b >> c >> d;
	    (a + c == 180 && b + d == 180) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}