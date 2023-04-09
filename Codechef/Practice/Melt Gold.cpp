https://www.codechef.com/problems/MELTGOLD




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    int ans = 1;
	    while(y < x){
	        y += ans;
	        ans++;
	    }
	    cout << ans - 1<< endl;
	}
	return 0;
}