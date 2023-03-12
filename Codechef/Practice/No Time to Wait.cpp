https://www.codechef.com/problems/NOTIME




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,h,x;
	cin >> n >> h >> x;
	bool flag = 0;
	for(int i=0;i<n;i++){
	    int k;
	    cin >> k;
	    if(x+k >= h)
	        flag = 1;
	}
	if(flag)
	    cout << "YES";
	else
	    cout << "NO";
	return 0;
}