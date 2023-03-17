https://www.codechef.com/problems/COMPRESSVD




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
	    for(int i=0;i<n;i++)
	        cin >> a[i];
	    int i=1;
	    int ans = 1;
	    while(i<n){
	        if(a[i] != a[i-1])
	            ans++;
	        i++;
	    }
	    cout << ans << endl;
	}
	return 0;
}