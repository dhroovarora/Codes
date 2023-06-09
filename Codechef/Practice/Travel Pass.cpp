https://www.codechef.com/problems/TRAVELPS




#include <iostream>
using namespace std;

int main() {
	// your code oes here
	int t;
	cin >> t;
	while(t--){
	    int n,a,b;
	    cin >> n >> a >> b;
	    string s;
	    cin >> s;
	    int ans = 0;
	    for(auto i : s)
	        ans += (i == '0') ? a : b;
	    cout << ans << endl;
	}
	return 0;
}