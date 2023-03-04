https://www.codechef.com/problems/FACEDIR




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    (x%4==0) ? cout << "North" : (x%4==1) ? cout << "East" : (x%4==2) ? cout << "South" : cout << "West";
	    cout << endl;
	}
	return 0;
}