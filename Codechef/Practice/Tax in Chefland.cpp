https://www.codechef.com/problems/TAXES




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x>100)
	        x -= 10;
	    cout << x << endl;
	}
	return 0;
}
