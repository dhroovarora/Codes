https://www.codechef.com/START83C/problems/CONSTR




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
	    string ans = "";
	    while(i<n){
	        char a = s[i];
	        i++;
	        int c = 1;
	        while(s[i] == a){
	            i++;
	            c++;
	        }
	        if(c%2)
	            ans += a;
	        else{
	            ans += a;
	            ans += a;
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}