https://www.codechef.com/problems/ENCMSG




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
	    for(int i = 0 ; i < n-1 ; i += 2){
	        if(n%2 && i == n-2)
	            break;
	        swap(s[i],s[i+1]);
	    }
	    for(int i=0;i<n;i++){
	        s[i] = (25 - (s[i] - 'a')) + 'a';
	    }
	    cout << s << endl;
	}
	return 0;
}