https://www.codechef.com/problems/WCC




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    string s;
	    cin >> s;
	    int c = 0;
	    int n = 0;
	    for(int i=0;i<14;i++){
	        if(s[i] == 'C')
	            c++;
	        else if(s[i] == 'N')
	            n++;
	    }
	    if(c > n)
	        cout << 60 * x  << endl;
	    else if(c == n)
	        cout << 55 * x << endl;
	    else
	        cout << 40 * x << endl;
	}
	return 0;
}