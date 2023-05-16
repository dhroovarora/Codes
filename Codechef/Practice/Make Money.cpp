https://www.codechef.com/problems/MAKEMONEY




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x,c;
	    cin >> n >> x >> c;
	    int ans = 0;
	    for(int i=0;i<n;i++){
	        int k;
	        cin >> k;
	        if(k < x - c)
	            ans += (x - c);
	        else
	            ans += k;
	    }
	    cout << ans << endl;
	}
	return 0;
}