#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int q = n/3;
	    if(n==1){
	    cout<<"a";
	    }
	    else if(n==2){
	        cout<<"ab";
	    }
	    else if(n==3){
	        cout<<"abc";
	    }
	    else if(n>3){
	        for(int i=0;i<q;i++){
	                cout<<"abc";
	            }
	        if(n%3==1){
	            cout<<"a";
	        }
	        else if(n%3==2){
	            cout<<"ab";
	        }
	    }
	    cout<<endl;
    }
	return 0;
}