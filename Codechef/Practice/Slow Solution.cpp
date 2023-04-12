https://www.codechef.com/problems/SLOWSOLN




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    long long ans = 0;
	    while(a-- && c){
	        if(c >=b){
	            ans += (b*b);
	            c -= b;
	        }
	        else{
	            ans += (c*c);
	            c = 0;
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}