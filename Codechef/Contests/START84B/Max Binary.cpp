https://www.codechef.com/START84B/problems/MAX_BIN




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,k;
	    cin >> n >> k;
	    string s;
	    cin >> s;
	    if(s[0] == '0'){
	        s[0] = '1';
	        k--;
	    }
	    while(k--){
	        s += '0';
	    }
	    cout << s << endl;
	}
	return 0;
}