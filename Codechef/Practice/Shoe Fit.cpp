https://www.codechef.com/problems/SHOEFIT




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    int count0 = 0;
	    int count1 = 0;
	    (a == 0) ? count0++ : count1++;
	    (b == 0) ? count0++ : count1++;
	    (c == 0) ? count0++ : count1++;
	    (count0 && count1) ? cout << 1 : cout << 0;
	    cout << endl;
	    
	}
	return 0;
}