https://www.codechef.com/problems/JOHNY




#include <bits/stdc++.h>
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
	    int k;
	    cin >> k;
	    int temp = a[k-1];
	    int ans = 0;
	    sort(a,a+n);
	    for(int i=0;i<n;i++)
	        if(a[i] == temp){
	            ans = i;
	            break;
	        }
	    cout << ans + 1 << endl;
	}
	return 0;
}