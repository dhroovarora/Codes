https://www.codechef.com/problems/HIGHSCORE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(a>b){
	        if(c>a){
	            if(d>c){
	                cout<<d;
	            }
	            else{
	                cout<<c;
	            }
	        }
	        else{
	            if(d>a){
	                cout<<d;
	            }
	            else{
	                cout<<a;
	            }
	        }
	    }
	    else{
	        if(c>b){
	            if(d>c){
	                cout<<d;
	            }
	            else{
	                cout<<c;
	            }
	        }
	        else{
	            if(d>b){
	                cout<<d;
	            }
	            else{
	                cout<<b;
	            }
	        }
	    }
	    cout<<endl;
	}
	return 0;
}