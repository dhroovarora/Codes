https://www.codechef.com/problems/COMM3




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int r;
	    cin >> r;
	    int x1,x2,x3,y1,y2,y3;
	    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	    double a = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
	    double b = sqrt((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2));
	    double c = sqrt((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3));

        if ((a<=r && b<=r) || (a<=r && c<=r) || (b<=r && c<=r))
            cout << "yes" << endl;
        else 
            cout << "no" << endl;
	}
	return 0;
}