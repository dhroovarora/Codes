https://www.codechef.com/problems/XYSTR




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
	    for(int i=0;i<s.size()-1;i++){
	        if((s[i] == 'x' && s[i+1] == 'y') || (s[i] == 'y' && s[i+1] == 'x')){
	            ans++;
	            i++;
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}