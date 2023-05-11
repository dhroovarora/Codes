https://www.codechef.com/START49D/problems/VALIDMIN




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int a1 = a<b?a:b;
	    int a2 = a<c?a:c;
	    int a3 = b<c?b:c;
	    if(a1==a2 && a2==a3 && a1==a3){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}