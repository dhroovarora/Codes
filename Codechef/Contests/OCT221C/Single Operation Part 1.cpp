https://www.codechef.com/OCT221C/problems/SINGLEOP1/




#include <bits/stdc++.h>
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
	    int c=0;
	    for(int i=0;i<n-1;i++){
	        if(s[i] == '1'){
	            c++;
	        }
	        else{
	            break;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
