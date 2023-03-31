https://www.codechef.com/START75B/problems/PREFONES




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    int count = 0;
	    int i =0;
	    for(;i<n;i++)
	        if(s[i] == '1')
	            count++;
	        else
	            break;
	       
	    int t = 0;
	    for(;i<n;i++){
	        if(s[i] == '1'){
	            int k = 0;
	            while(s[i++] == '1')
	                k++;
	            i--;
	            t = max(t,k);
	        }
	    }
	    cout << count + t << endl;
	}
	return 0;
}