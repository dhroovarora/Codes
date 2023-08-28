https://www.codechef.com/problems/BIT2A




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
	    int ans[n];
	    ans[n-1] = 0;
	    for(int i=n-2;i>=0;i--){
	        if(a[i] == a[i+1])
	            ans[i] = ans[i+1];
	        else
	            ans[i] = n - 1 - i;
	    }
	    for(int i=0;i<n;i++)
	        cout << ans[i] << " ";
	    cout << endl;
	}
	return 0;
}