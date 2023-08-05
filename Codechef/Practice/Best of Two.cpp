https://www.codechef.com/problems/DICEGAME2




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a1,a2,a3,b1,b2,b3;
	    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
	    if(a1 > a2)
	        a1 = a1 + max(a2,a3);
	    else
	        a1 = a2 + max(a1,a3);
	    if(b1 > b2)
	        b1 = b1 + max(b2,b3);
	    else
	        b1 = b2 + max(b1,b3);
	    (a1 > b1) ? cout << "Alice" : (a1 < b1) ? cout << "Bob" : cout << "Tie";
	    cout << endl;
	}
	return 0;
}