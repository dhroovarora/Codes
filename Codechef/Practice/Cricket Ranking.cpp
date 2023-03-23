https://www.codechef.com/problems/CRICRANK




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c,d,e,f;
	    cin >> a >> b >> c >> d >> e >> f;
	    int count = 0;
	    (a > d) ? count++ : count--;
	    (b > e) ? count++ : count--;
	    (c > f) ? count++ : count--;
	    (count>0) ? cout << "A" : cout << "B";
	    cout << endl;
	}
	return 0;
}