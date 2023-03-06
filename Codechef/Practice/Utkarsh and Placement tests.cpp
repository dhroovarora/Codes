https://www.codechef.com/problems/UTKPLC




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    char a,b,c;
	    cin >> a >> b >> c;
	    char x,y;
	    cin >> x >> y;
	    if( a==x || a==y )
	        cout << a;
	    else if( b==x || b==y)
	        cout << b;
	    cout << endl;
	}
	return 0;
}