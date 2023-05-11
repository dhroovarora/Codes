https://www.codechef.com/START84B/problems/MAX1XOR




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    int a = 1;
	    int b = 0;
	    int ans1 = 1 , ans2 = 0;
	    for(int i=0;i<n-1;i++){
	        int k = a ^ (s[i] - 48);
	        if(k == 1)
	            ans1++;
	        a = k;
	        int p = b ^ (s[i] - 48);
	        if(p == 1)
	            ans2++;
	        b = p;
	    }
	    cout << max(ans1,ans2) << endl;
	}
	return 0;
}