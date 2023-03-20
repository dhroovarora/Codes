https://www.codechef.com/problems/PRICECON




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,k;
	    cin >> n >> k;
	    int ans = 0;
	    for(int i=0;i<n;i++){
	        int p;
	        cin >> p;
	        if(p > k)
	            ans += p -k;
	    }
	    cout << ans << endl;
	}
	return 0;
}