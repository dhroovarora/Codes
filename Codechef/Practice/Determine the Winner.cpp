https://www.codechef.com/problems/WINNERR




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int pa,pb,qa,qb;
	    cin >> pa >> pb >> qa >> qb;
	    (max(pa,pb) < max(qa,qb)) ? cout << "P" : (max(pa,pb) == max(qa,qb)) ? cout << "TIE" : cout << "Q"; 
	    cout << endl;
	}
	return 0;
}
