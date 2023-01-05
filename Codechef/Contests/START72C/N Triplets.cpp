https://www.codechef.com/problems/NTRIPLETS




#include <bits/stdc++.h>
using namespace std;

int value(int n){
    if(n<5)
        return -1;
    for(int i=2;i*i<n;i++)
        if(n%i==0)
            return i;
    return -1;
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int k = value(n);
	    if(k==-1)
	        cout << -1 << endl;
	    else
	        cout << 1 << " " << k << " " << n/k << endl; 
	}
	return 0;
}
