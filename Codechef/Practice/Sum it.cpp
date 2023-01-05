https://www.codechef.com/problems/SUMM




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    if((a+b) == c)
	        cout << "YES";
	    else
	        cout << "NO";
	    cout << endl;
	}
	return 0;
}
