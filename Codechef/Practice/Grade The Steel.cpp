https://www.codechef.com/problems/FLOW014




#include <iostream>
using namespace std;

bool one(double h){
    if(h > 50)
        return 1;
    return 0;
}
bool two(double c){
    if(c < 0.7)
        return 1;
    return 0;
}
bool three(double t){
    if(t > 5600)
        return 1;
    return 0;
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    double h,c,t;
	    cin >> h >> c >> t;
	    if(one(h) && two(c) && three(t))
	        cout << 10;
	    else if ( one(h) && two(c))
	        cout << 9;
	    else if ( two(c) && three(t) )
	        cout << 8;
	    else if ( one(h) && three(t) )
	        cout << 7;
	    else if ( one(h) || two(c) || three(t) )
	        cout << 6;
	    else
	        cout << 5;
	    cout << endl;
	}
	return 0;
}