https://www.codechef.com/problems/EUREKA




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    float p = pow((0.143*n),n);
	    (p - floor(p) < 0.5) ? cout << floor(p) : cout << floor(p) + 1;
	    cout << endl;
 	}
	return 0;
}