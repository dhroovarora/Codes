#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,dsa1,toc1,dm1,dsa2,toc2,dm2,a,b;
	cin>>t;
	while(t--){
	    cin>>dsa1>>toc1>>dm1>>dsa2>>toc2>>dm2;
	    a = dsa1 + toc1 + dm1;
	    b = dsa2 + toc2 + dm2;
	    if(a > b){
	        cout<<"Dragon"<<endl;
	    }
	    else if(b > a){
	        cout<<"Sloth"<<endl;
	    }
	    else{
	        if( dsa1 > dsa2){
	            cout<<"Dragon"<<endl;
	        }
	        else if( dsa2 > dsa1){
	            cout<<"Sloth"<<endl;
	        }
	        else{
	            if(toc1 > toc2){
	                cout<<"Dragon"<<endl;
	            }
	            else if(toc2 > toc1){
	                cout<<"Sloth"<<endl;
	            }
	            else{
	                cout<<"tie"<<endl;
	            }
	        }
	    }
	}
	return 0;
}
