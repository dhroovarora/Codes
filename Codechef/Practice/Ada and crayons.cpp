https://www.codechef.com/problems/ADACRA




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
	        if(s[i] != s[i+1])
	            ans++;
	    }
	    cout << (ans + 1)/2<< endl;
	}
	return 0;
}