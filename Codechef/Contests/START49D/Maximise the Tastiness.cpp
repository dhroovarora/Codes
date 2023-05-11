https://www.codechef.com/START49D/problems/MAXTASTE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d,dhroov=0;
	    cin>>a>>b>>c>>d;
	    if(a>b){
	        dhroov +=a;
	    }
	    else{
	        dhroov += b;
	    }
	    if(c>d){
	        dhroov +=c;
	    }
	    else{
	        dhroov += d;
	    }
	    cout<<dhroov<<endl;
	}
	return 0;
}