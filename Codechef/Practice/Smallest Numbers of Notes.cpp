https://www.codechef.com/problems/FLOW005




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    cout <<  n/100 + (n%100)/50 + ((n%100)%50)/10 + (((n%100)%50)%10)/5 + ((((n%100)%50)%10)%5)/2 + (((((n%100)%50)%10)%5)%2)/1 << endl;
 	}
	return 0;
}