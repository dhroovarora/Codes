#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    if(a>50){
	        cout<<"A"<<endl;
	    }
	    else if(b>50){
	        cout<<"B"<<endl;
	    }
	    else if(c>50){
	        cout<<"C"<<endl;
	    }
	    else{
	        cout<<"NOTA"<<endl;
	    }
	}
	return 0;
}
