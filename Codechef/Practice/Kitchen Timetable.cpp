https://www.codechef.com/problems/KTTABLE




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
	    int b[n];
	    for(int i=0;i<n;i++)
	        cin >> a[i];
	    for(int i=0;i<n;i++)
	        cin >> b[i];
	    int ans = 0;
	    if(a[0] >= b[0])
	        ans++;
	    for(int i=1;i<n;i++){
	        if(b[i] <= a[i] - a[i-1])
	            ans++;
	    }
	    cout << ans << endl;
	}
	return 0;
}