https://www.codechef.com/problems/TRICOIN




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int i = 0;
	    while((i*(i+1))/2 <= n){
	        i++;
	    }
	    cout << i - 1 << endl;
	}
	return 0;
}