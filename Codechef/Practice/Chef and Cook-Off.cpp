https://www.codechef.com/problems/CCOOK




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	while(n--){
	    int count = 0;
	    int a,b,c,d,e;
	    cin >> a >> b >> c >> d >> e;
	    count = a + b + c + d + e;
	    (count == 0) ? cout << "Beginner" : (count == 1) ? cout << "Junior Developer" : (count == 2) ? cout << "Middle Developer" : (count == 3) ? cout << "Senior Developer" : (count == 4) ? cout << "Hacker" : cout << "Jeff Dean";
	    cout << endl;
	    
	}
	return 0;
}