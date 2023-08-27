https://www.codechef.com/problems/C00K0FF




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a=0,b=0,c=0,d=0,e=0;
	    string s;
	    for(int i=0;i<n;i++){
	        cin >> s;
	        (s == "cakewalk") ? ++a : (s == "simple") ? ++b : (s == "easy") ? ++c : (s == "easy-medium" || s == "medium") ? ++d : ++e;
	    }
	    (a && b && c && d && e) ? cout << "Yes" : cout << "No";
	    cout << endl;
	    
	}
	return 0;
}