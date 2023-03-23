https://www.codechef.com/problems/PPSUM




#include <iostream>
using namespace std;

int sum(int n){
    if(n==1)
        return 1;
    return n + sum(n-1);
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int d,n;
	    cin >> d >> n;
	    while(d--){
	        n = sum(n);
	    }
	    cout << n << endl;
	}
	return 0;
}