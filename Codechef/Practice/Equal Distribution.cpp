https://www.codechef.com/problems/EQUALDIST




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b;
	    cin >> a >> b;
	    if((a+b)%2)
	        cout <<"NO"<<endl;
	    else
	        cout<<"YES"<<endl;
	}
	return 0;
}
