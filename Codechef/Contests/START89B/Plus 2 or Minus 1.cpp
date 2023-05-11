https://www.codechef.com/START89B/problems/PLUS2MINUS1




#include <bits/stdc++.h>
using namespace std;

int helper(int y){
    if(y==0)
        return 1;
    return (y+1) + helper(y-1);
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int y;
	    cin >> y;
	    if(y==0)
	        cout << 1 << endl;
	    else
	        cout << 3*y << endl;
	}
	return 0;
}
