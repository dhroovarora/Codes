https://www.codechef.com/START55C/problems/BROKENPHONE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x==y){
	        cout<<"ANY"<<endl;
	    }
	    else if(x<y){
	        cout<<"REPAIR"<<endl;
	    }
	    else{
	        cout<<"NEW PHONE"<<endl;
	    }
	}
	return 0;
}