https://www.codechef.com/problems/THREEQ




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    int q = 0;
	    (a==1) ? q++ : q--;
	    (b==1) ? q++ : q--;
	    (c==1) ? q++ : q--;
	    int A,B,C;
	    cin >> A >> B >> C;
	    int Q = 0;
	    (A==1) ? Q++ : Q--;
	    (B==1) ? Q++ : Q--;
	    (C==1) ? Q++ : Q--;
	    (q == Q) ? cout << "Pass" : cout << "Fail";
	    cout << endl;
	}
	return 0;
}