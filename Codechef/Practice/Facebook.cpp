https://www.codechef.com/problems/FACEBOOK




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
	    int b[n];
	    for(int i=0;i<n;i++)
	        cin >> a[i];
	    for(int i=0;i<n;i++)
	        cin >> b[i];
	    int p = *max_element(a,a+n);
	    bool flag = 0;
	    int ans = 0;
	    for(int i=0;i<n;i++){
	        if(a[i] == p){
	            if(flag){
	                if(b[ans] < b[i])
	                    ans = i;
	            }
	            else{
	                flag = 1;
	                ans = i;
	            }
	        }
	    }
	    cout << ans + 1 << endl;
	}
	return 0;
}