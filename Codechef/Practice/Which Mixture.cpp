https://www.codechef.com/problems/MIXTURE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b;
	    cin >> a >> b;
	    (a > 0 && b > 0) ? cout << "Solution" : (b==0) ? cout << "Solid" : cout << "Liquid";
	    cout << endl;
	}
	return 0;
}