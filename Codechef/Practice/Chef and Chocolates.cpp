https://www.codechef.com/problems/CCHOCOLATES




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,z;
	    cin >> x >> y >> z;
	    cout << (5*x + 10*y) / z << endl;
	}
	return 0;
}
