https://www.codechef.com/problems/MATPAN




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a[26] , sum = 0;
	    for(int i=0;i<26;i++){
	        cin >> a[i];
	        sum += a[i];
	    }
	    string s;
	    cin >> s;
	    for(int i=0;i<s.size();i++){
	        sum -= a[s[i] - 'a'];
	        a[s[i] - 'a'] = 0;
	    }
	    cout << sum << endl;
	}
	return 0;
}