https://www.codechef.com/problems/MAGICHF




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x,s;
	    cin >> n >> x >> s;
	    for(int i=0;i<s;i++){
	        int a,b;
	        cin >> a >> b;
	        if(a == x)
	            x = b;
	        else if(b==x)
	            x = a;
	    }
	    cout << x << endl;
	}
	return 0;
}