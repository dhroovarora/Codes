https://www.codechef.com/problems/AUDIBLE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x >66 && x < 45001)
	        cout<<"YeS"<<endl;
	    else
	        cout<<"No"<<endl;
	}
	return 0;
}
