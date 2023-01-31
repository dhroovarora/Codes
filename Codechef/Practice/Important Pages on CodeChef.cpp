https://www.codechef.com/problems/CHEFPAGES




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b;
	cin >> a >> b;
	if(a==1){
	    if(b==1)
	        cout << "https://discuss.codechef.com";
	    else
	        cout << "https://www.codechef.com/contests";
	}
	else
	    cout << "https://www.codechef.com/practice";
	return 0;
}