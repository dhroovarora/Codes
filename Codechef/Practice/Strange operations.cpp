https://www.codechef.com/problems/UTMOPR




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,k;
	    cin >> n >> k;
	    int s=0,p;
	    for(int i=0;i<n;i++){
	        cin >> p;
	        s += p;
	    }
	    ((s&1)==0 && k==1) ? cout << "odd" : cout << "even";
	    cout << endl;
	}
	return 0;
}