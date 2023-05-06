https://www.codechef.com/problems/HOLES




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    int ans = 0;
	    for(int i=0;i<s.size();i++){
	        if(s[i] == 'A' || s[i] == 'D' || s[i] == 'O' || s[i] == 'P' || s[i] == 'Q' || s[i] == 'R')
	            ans++;
	        else if(s[i] == 'B')
	            ans+=2;
	    }
	    cout << ans << endl;
	}
	return 0;
}