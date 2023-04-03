https://www.codechef.com/problems/ATM2




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int N,K;
	    cin >> N >> K;
	    for(int i=0;i<N;i++){
	        int k;
	        cin >> k;
	        if(k <= K){
	            K -= k;
	            cout << '1';
	        }
	        else
	            cout << '0';
	    }
	    cout << endl;
	}
	return 0;
}