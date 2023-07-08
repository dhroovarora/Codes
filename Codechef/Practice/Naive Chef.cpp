https://www.codechef.com/problems/NAICHEF




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    double n,a,b;
	    cin >> n >> a >> b;
	    double counta = 0 , countb = 0;
	    for(int i=0;i<n;i++){
	        int x;
	        cin >> x;
	        if(a == x)
	            ++counta;
	        if(b == x)
	            ++countb;
	    }
	    cout << fixed << setprecision(10) ;
	    cout << (counta*countb)/(n*n) << endl;
	}
	return 0;
}