https://www.codechef.com/problems/PALL01




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a = n;
	    int b = 0;
	    while(a){
	        b = b*10 + a%10;
	        a /= 10;
	    }
	    (b == n) ? cout << "wins" : cout << "loses";
	    cout << endl;
	}
	return 0;
}