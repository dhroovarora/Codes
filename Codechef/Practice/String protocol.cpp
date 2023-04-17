https://www.codechef.com/problems/STRP




#include <iostream>
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
	    int i=0;
	    int ans = 0;
	    while(i<n){
	        if(i==n-1)
	            ans++;
	        else{
	            if(s[i] == s[i+1])
	                i++;
	            ans++;
	        }
	        i++;
	    }
	    cout << ans << endl;
	}
	return 0;
}