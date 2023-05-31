https://www.codechef.com/problems/MSNSADM1




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
	    int b[n];
	    for(int i=0;i<n;i++)
	        cin >> b[i];
	    int ans = 0;
	    for(int i=0;i<n;i++)
	        if(a[i]*2 > b[i])
	            ans = max(ans,(a[i]*2 - b[i])*10);
	    cout << ans << endl;
	}
	return 0;
}