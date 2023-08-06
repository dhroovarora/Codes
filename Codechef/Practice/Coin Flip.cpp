https://www.codechef.com/problems/CONFLIP




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int g;
	    cin >> g;
	    while(g--){
	        int i,n,q;
	        cin >> i >> n >> q;
	        if(i == 1){
	            if(n%2){
	                if(q == 1){
	                    cout << n/2;
	                }
	                else{
	                    cout << n/2 + 1;
	                }
	            }
	            else{
	                cout << n/2;
	            }
	        }
	        else{
	             if(n%2){
	                if(q == 2){
	                    cout << n/2;
	                }
	                else{
	                    cout << n/2 + 1;
	                }
	            }
	            else{
	                cout << n/2;
	            }
	        }
	        cout << endl;
	    }
	}
	return 0;
}
