https://www.codechef.com/practice/PCPPAR01/problems/KITCHENCOST




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	    cin >> n >> x;
	    int ans = 0;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin >> a[i];
	    for(int i=0;i<n;i++){
	        int q;
	        cin >> q;
	        if(a[i]>=x)
	            ans += q;
	    }
	    cout << ans << endl;
	}
	return 0;
}