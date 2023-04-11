https://www.codechef.com/problems/WEIGHTBL




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c,d,m;
	    cin >> a >> b >> c >> d >> m;
	    b -= a;
	    if(b >= m*c && b <= m*d)
	        cout << 1;
	    else
	        cout << 0;
	    cout << endl;
	}
	return 0;
}