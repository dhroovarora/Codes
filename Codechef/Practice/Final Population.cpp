https://www.codechef.com/problems/POPULATION




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,z;
	    cin >> x >> y >> z;
	    cout << x - y + z << endl;
	}
	return 0;
}
