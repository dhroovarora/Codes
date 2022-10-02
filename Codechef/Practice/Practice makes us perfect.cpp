https://www.codechef.com/problems/PRACTICEPERF




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int dhroov=0;
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a>=10){
	    dhroov++;
	}
	if(b>=10){
	    dhroov++;
	}
	if(c>=10){
	    dhroov++;
	}
	if(d>=10){
	    dhroov++;
	}
	cout<<dhroov;
	return 0;
}