https://www.codechef.com/problems/MILEAGE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    double n,x,y,a,b;
	    cin >> n >> x >> y >> a >> b;
	    (n/a * x < n/b * y) ? cout << "PETROL" : (n/a * x > n/b * y) ? cout << "DIESEL" : cout << "ANY";
	    cout << endl;
	}
	return 0;
}