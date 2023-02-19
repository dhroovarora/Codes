https://www.codechef.com/problems/FRUITCHAAT




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    cout << min(x/2,y) << endl;
	}
	return 0;
}