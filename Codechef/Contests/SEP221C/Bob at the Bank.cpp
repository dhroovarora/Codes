https://www.codechef.com/SEP221C/problems/BOBBANK/




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int w,x,y,z;
	    cin>>w>>x>>y>>z;
	    cout<< w + z*(x-y)<<endl;
	}
	return 0;
}
