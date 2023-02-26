https://www.codechef.com/problems/FLOW010




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    char a;
	    cin >> a;
	    (a == 'B' || a == 'b') ? cout << "BattleShip" : (a == 'C' || a == 'c') ? cout << "Cruiser" : (a == 'D' || a == 'd') ? cout << "Destroyer" : cout << "Frigate";
	    cout << endl;
	    
	}
	return 0;
}