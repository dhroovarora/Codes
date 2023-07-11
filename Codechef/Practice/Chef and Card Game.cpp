https://codechef.com/problems/CRDGAME




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a=0,b=0;
	    for(int i=0;i<n;i++){
	        int k,p;
	        cin >> k >> p;
	        int q = 0,w = 0;
	        while(k){
	            q += k%10;
	            k /= 10;
	        }
	        while(p){
	            w += p%10;
	            p /= 10;
	        }
	        if(q > w)
	            ++a;
	        else if(q < w)
	            ++b;
	        else{
	            ++a;
	            ++b;
	        }
	    }
	    (a > b) ? cout << 0 << " " << a : (a < b) ? cout << 1 << " " << b: cout << 2 << " " << a;
	    cout << endl;
	}
	return 0;
}
