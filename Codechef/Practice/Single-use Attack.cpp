https://www.codechef.com/problems/SINGLEUSE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int h,x,y;
	    cin >> h >> x >> y;
	    h -= y;
	    int count = 1;
	    count += (h>0) ? (h%x) ? h/x + 1 : h/x : 0;
	    cout << count << endl;
	}
	return 0;
}