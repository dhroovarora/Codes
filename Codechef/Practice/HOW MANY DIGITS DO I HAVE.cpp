https://www.codechef.com/problems/HOWMANY




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int c = 0;
	while(n){
	    c++;
	    n /= 10;
	}
	(c > 3) ? cout << "More than 3 digits" : cout << c ;
	return 0;
}