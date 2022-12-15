https://www.codechef.com/problems/RAINFALL1




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin >> x;
	    if(x<3)
	        cout<<"LIGHT";
	    else if(x>=3 && x < 7)
	        cout<<"MODERATE";
	    else
	        cout<<"HEAVY";
	    cout<<endl;
	}
	return 0;
}
