https://www.codechef.com/START75B/problems/THREEPOW2




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    string s;
	    cin >> n;
	    cin >> s;
	    if(s == "1" || s == "10" )
	        cout << "NO" << endl;
	    else{
	        int count = 0;
	        for(int i=0;i<n;i++)
	            if(s[i] == '0') 
	                count++;
	        if(n-count <= 3)
	            cout << "YES";
	        else
	            cout << "NO";
	        cout << endl;
	    }
	}
	return 0;
}