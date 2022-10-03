https://www.codechef.com/problems/INSURANCE




#include <iostream>
using namespace std;

void dhroov(){
    int x,y;
    cin>>x>>y;
    if(y>=x){
        cout<<x<<endl;
    }
    else{
        cout<<y<<endl;
    }
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    dhroov();
	}
	return 0;
}
