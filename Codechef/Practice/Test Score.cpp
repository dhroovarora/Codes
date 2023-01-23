https://www.codechef.com/problems/CHEFSCORE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x,y;
	    cin >> n >> x >> y;
	    (y%x==0 && n*x >= y) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}
