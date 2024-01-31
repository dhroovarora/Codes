https://www.spoj.com/problems/TEST/




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x;
	cin>>x;
	while(x!=42){
		cout<<x<<endl;
		int p;
		cin>>p;
		x = p;
	}
	return 0;
}