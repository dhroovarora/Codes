https://www.codechef.com/problems/CHEFCONTEST




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,p,q;
	    cin >> x >> y >> p >> q;
	    (x + p*10 < y + q*10) ? cout << "Chef" : (x + p*10 > y + q*10) ? cout << "Chefina" : cout << "Draw";
	    cout << endl;
	}
	return 0;
}