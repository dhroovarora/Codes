#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a = 0;
	    for(int i=0;i<10;i++){
	        int k;
	        cin >> k;
	        if(k==1){
	            if(i%2)
	                a--;
	            else
	                a++;
	        }
	    }
	    (a > 0) ? cout << 1 : (a < 0) ? cout << 2 : cout << 0;
	    cout << endl;
	}
	return 0;
}