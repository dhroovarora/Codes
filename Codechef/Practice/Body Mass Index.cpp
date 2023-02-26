https://www.codechef.com/problems/BMI




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int m,h;
	    cin >> m >> h;
	    ((m/h)/h) < 19 ? cout << 1 : ((m/h)/h) < 25 ? cout << 2 : ((m/h)/h) < 30 ? cout << 3 : cout << 4;
	    cout << endl;
	}
	return 0;
}