https://www.codechef.com/problems/JMARKET




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    int a[3];
	    for(int i=0;i<3;i++){
	        cin >> a[i];
	    }
	    sort(a,a+3);
	    cout << a[1] + a[0]*(x-1) << endl;
	}
	return 0;
}