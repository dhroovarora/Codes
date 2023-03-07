https://www.codechef.com/problems/CHEFRUN




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    float x1,x2,x3,v1,v2;
	    cin >> x1 >> x2 >> x3 >> v1 >> v2;
	    ((x3-x1)/v1 < (x2-x3)/v2) ? cout << "Chef" : ((x3-x1)/v1 > (x2-x3)/v2) ? cout << "Kefa" : cout << "Draw";
	    cout << endl;
	}
	return 0;
}