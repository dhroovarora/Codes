https://www.codechef.com/problems/TALLER




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    char ans =  x > y ? 'A' : 'B' ;
	    cout << ans << endl;
 	}
	return 0;
}
