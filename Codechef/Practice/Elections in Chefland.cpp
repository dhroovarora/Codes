https://www.codechef.com/problems/ELECTN




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	    cin >> n >> x;
	    int c = 0;
	    for(int i=0;i<n;i++){
	        int k;
	        cin >> k;
	        if(k >=x)
	            c++;
	    }
	    cout << c << endl;
	}
	return 0;
}