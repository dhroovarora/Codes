https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SPCP2?tab=statement




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,n;
	    cin>>x>>n;
	    int purchase_aircraft=n/100;
	    
	    if(purchase_aircraft>=x&&(n%100==0))
	    
	        cout<<purchase_aircraft-x<<endl;
	        
	    else if(purchase_aircraft>=x&&(n%100!=0))
	    
	        cout<<(purchase_aircraft-x)+1<<endl;
	        
	    else
	    
	        cout<<0<<endl;
	}
	return 0;
}