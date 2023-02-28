https://www.codechef.com/problems/PROBCAT




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    (x < 100) ? cout << "Easy" : (x<200) ? cout << "Medium" : cout << "Hard";
	    cout << endl;
	}
	return 0;
}