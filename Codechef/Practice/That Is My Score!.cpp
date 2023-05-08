https://www.codechef.com/problems/WATSCORE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a[11] = {0};
	    int n;
	    cin >> n;
	    for(int i=0;i<n;i++){
	        int q,w;
	        cin >> q >> w;
	        a[q] = max(a[q],w);
	    }
	    int ans = 0;
	    for(int i=0;i<9;i++)
	        ans += a[i];
	    cout << ans << endl;
	}
	return 0;
}