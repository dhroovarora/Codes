https://www.codechef.com/problems/FIRSTANDLAST




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    int ans = a[0] + a[n-1];
	    for(int i=0;i<n-1;i++){
	        ans = max(ans,(a[i]+a[i+1]));
	    }
	    cout << ans << endl;
	}
	return 0;
}