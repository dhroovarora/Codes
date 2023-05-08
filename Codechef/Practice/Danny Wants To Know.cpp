https://www.codechef.com/problems/DANOW




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long n,q;
	cin >> n >> q;
	long a[n];
	long b[n];
	for(long i=0;i<n;i++)
	    cin >> a[i];
	for(long i=0;i<n;i++)
	    cin >> b[i];
	while(q--){
    	long l,r;
    	cin >> l >> r;
	    --l;
    	long ans = 0;
    	for(;l<r;l++)
    	    ans += a[l]*b[l];
    	cout << ans << endl;
	}
	return 0;
}