https://www.codechef.com/problems/WTRMIXING




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
    	int a,b,x,y;
    	cin >> a >> b >> x >> y;
    	(b == a) ? cout << "YES" : (b > a) ? (b-a <= x) ? cout << "YES" : cout << "NO" : (a-b <= y) ? cout << "YES" : cout << "NO";
    	cout << endl;
	}
	return 0;
}