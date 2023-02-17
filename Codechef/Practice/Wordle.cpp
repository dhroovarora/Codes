https://www.codechef.com/problems/WORDLE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    string s,k;
	    cin >> s >> k;
	    for(int i=0;i<s.size();i++){
	        (k[i] == s[i]) ? s[i] = 'G' : s[i] = 'B';
	    }
	    cout << s << endl;
	}
	return 0;
}