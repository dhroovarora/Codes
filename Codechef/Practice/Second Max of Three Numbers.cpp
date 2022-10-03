https://www.codechef.com/problems/SNDMAX




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a>b){
	        if(c>a){
	            cout<<a;
	        }
	        else{
	            if(c<b){
	                cout<<b;
	            }
	            else{
	                cout<<c;
	            }
	        }
	    }
	    else{
	        if(c>b){
	            cout<<b;
	        }
	        else{
	            if(c<a){
	                cout<<a;
	            }
	            else{
	                cout<<c;
	            }
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
