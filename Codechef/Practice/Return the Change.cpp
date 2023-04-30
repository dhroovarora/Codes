https://www.codechef.com/problems/RETURNCHANGE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    if(x%10 > 4)
	        cout << 100 - (x/10 + 1)*10;
	    else
	        cout << 100 - (x/10)*10;
	    cout << endl;
	}
	return 0;
}