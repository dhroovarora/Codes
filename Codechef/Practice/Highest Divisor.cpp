https://www.codechef.com/problems/HDIVISR




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int i = 10;
	for(;i>=1;i--)
	    if(n%i == 0)
	        break;
	cout << i;
	return 0;
}