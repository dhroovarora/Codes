https://www.codechef.com/OCT221C/problems/SINGLEOP2/




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
	    int a=0;
	    for(int i=0;i<n;i++){
	        a++;
	        if(s[i+1] == '1'){
	            break;
	        }
	    }
	    cout<<a<<endl;
	}
	return 0;
}
