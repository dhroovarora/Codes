https://www.codechef.com/problems/DARLIG




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	    cin >> n >> x;
	    if(x==0 && n%4==0)
	        cout << "Off";
	    else if((x==1 && n%4==0) || (x==0 && n%4 != 0))
	        cout << "On";
	    else
	        cout << "Ambiguous";
	    cout << endl;
	}
	return 0;
}