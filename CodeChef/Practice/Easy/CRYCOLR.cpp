#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,a1,a2,a3,b1,b2,b3,c1,c2,c3;
    cin>>t;
    while(t--){
  	cin>>n>>a1>>a2>>a3>>b1>>b2>>b3>>c1>>c2>>c3;
  	int sum= a2+a3+b3;
  	int sum1=b1+c1+c2;
  	
  	
	  cout<<max(sum,sum1)<<endl;
  }
	return 0;
}
