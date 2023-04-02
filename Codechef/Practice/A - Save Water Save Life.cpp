https://www.codechef.com/problems/SAVWATER




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int h,x,y,c;
	    cin >> h >> x >> y >> c;
	    ((x+y/2)*h <= c) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}