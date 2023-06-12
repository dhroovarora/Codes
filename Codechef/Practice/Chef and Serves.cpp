https://www.codechef.com/problems/CHSERVE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,k;
	    cin >> a >> b >> k;
	    ((a+b)/k)%2 ? cout << "COOK" : cout << "CHEF";
	    cout << endl;
	}
	return 0;
}