https://www.codechef.com/problems/LTIME




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    bool ans = (x >=1 && x <=4);
	    if(ans)
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	}
	return 0;
}
