https://www.codechef.com/START49D/problems/HOTCOLD




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int c;
	    cin>>c;
	    if(c>20){
	        cout<<"HOT"<<endl;
	    }
	    else{
	        cout<<"COLD"<<endl;
	    }
	}
	return 0;
}