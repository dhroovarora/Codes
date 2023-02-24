https://www.codechef.com/problems/FIBXOR01




#include <iostream>
using namespace std;

int fib(int a,int b,int n){
    if(n==0)
        return a;
    if(n==1)
        return b;
    if(n==2)
        return a ^ b;
    return fib(a,b,n%3);
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,n;
	    cin >> a >> b >> n;
	    cout << fib(a,b,n) << endl;
	}
	return 0;
}