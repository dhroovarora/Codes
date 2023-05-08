https://www.codechef.com/problems/QUEENATTACK




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x,y;
	    cin >> n >> x >> y;
	    cout << 2*(n-1) + min(x-1,y-1) + min(x-1,n-y) + min(n-x,y-1) + min(n-x,n-y) << endl;
	}
	return 0;
}