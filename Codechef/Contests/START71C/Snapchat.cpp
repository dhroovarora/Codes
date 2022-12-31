https://www.codechef.com/problems/SNAPCHAT




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	        cin >> a[i];
	    for(int i=0;i<n;i++)
	        cin >> b[i];
	    int ans = 0;
	    int temp  = 0;
	    for(int i=0;i<n;i++){
	        if(a[i] == 0 || b[i] == 0){
	            ans = max(ans,temp);
	            temp = 0;
	        }
	        else
	            temp++;
	    }
	    if(temp)
	        ans = max(ans,temp);
	    cout << ans << endl;
	}
	return 0;
}
