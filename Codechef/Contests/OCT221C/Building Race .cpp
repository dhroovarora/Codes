codechef.com/OCT221C/problems/BUILDINGRACE/




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    float a,b,x,y;
	    cin>>a>>b>>x>>y;
	    if(a/x == b/y)
	        cout<<"Both"<<endl;
	    else if(a/x < b/y)
	        cout<<"Chef"<<endl;
	    else
	        cout<<"Chefina"<<endl;
	}
	return 0;
}
