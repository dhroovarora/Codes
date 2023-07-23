https://www.codechef.com/problems/MOZZ




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,r;
	    cin>>x>>y>>r;
	    int z=r/30;
	    int p=x+z;
	    int a=p%y;
	    if(a==0){
	        cout<<p/y<<endl;
	    }
	    else{
	        cout<<(p/y)+1<<endl;
	    }
	}
	return 0;
}