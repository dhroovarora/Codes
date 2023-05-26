https://www.codechef.com/problems/EXUNA




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int ans = 1000000000;
	    for(int i=0;i<n;i++){
	        int k;
	        cin >> k;
	        ans = min(ans,k);
	    }
	    cout << ans << endl;
	}
	return 0;
}