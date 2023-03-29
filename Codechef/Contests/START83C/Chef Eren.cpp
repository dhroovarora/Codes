https://www.codechef.com/START83C/problems/CHEFEREN




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,a,b;
	    cin >> n >> a >> b;
	    (n%2) ? cout << (n/2)*(a+b) + b : cout << (n/2)*(a+b);
	    cout << endl;
	}
	return 0;
}