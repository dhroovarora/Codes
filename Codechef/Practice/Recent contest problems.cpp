https://www.codechef.com/problems/RECENTCONT




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a = 0,b=0;
	    for(int i=0;i<n;i++){
	        string s;
	        cin >> s;
	        if(s == "START38")
	            a++;
	        else
	            b++;
	    }
	    cout << a << " " << b << endl;
	}
	return 0;
}