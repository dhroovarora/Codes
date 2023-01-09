https://www.codechef.com/problems/CMASKS




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    if(10*x < y)
	        cout << "Disposable" << endl;
	    else
	        cout << "Cloth" << endl;
	}
	return 0;
}
