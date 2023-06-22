https://www.codechef.com/problems/KOL15A




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    int n = s.size();
	    int ans = 0;
	    for(int i=0;i<n;i++){
	        if(s[i] >= '0' && s[i] <= '9')
	            ans += (s[i] - '0');
	    }
	    cout << ans <<endl;
	}
	return 0;
}