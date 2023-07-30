https://www.codechef.com/problems/DIVIDING




#include <iostream>
using namespace std;

int main() {
	long n;
	cin>>n;
	long long int c, totalStamp=0 ;
	for(long i=0; i<n; i++) {
        cin>>c;
	    totalStamp+=c;
	}
	    
	if(totalStamp == ((n*(n+1))/2)) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	    
	return 0;
}