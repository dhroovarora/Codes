https://www.codechef.com/problems/JGAMES




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    ((x+y)%2) ? cout << "Jay" : cout << "Janmansh";
	    cout << endl;
	}
	return 0;
}