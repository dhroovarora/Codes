https://www.codechef.com/problems/EVENSPLIT




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    if(n <= 2){
	        cout<<s<<endl;
	    }
	    else{
	        string ans = "";
	        int zero = 0;
	        for(int i=0;i<n;i++){
	            if(s[i] == '0'){
	                zero++;
	            }
	        }
	        for(int i=0;i<zero;i++){
	            ans += '0';
	        }
	        for(int i=zero;i<n;i++){
	            ans += '1';
	        }
	        cout<<ans<<endl;
	    }
	}
	return 0;
}
