https://www.codechef.com/problems/DIGARR




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int d;
	    string n;
	    cin >> d >> n;
	    bool f = 0;
	    for(int i=0;i<d;i++){
	        if(n[i] == '5' || n[i] == '0')
	            f = 1;
	        if(f)
	            break;
	    }
	    if(f)
	        cout << "YES";
	    else
	        cout << "NO";
	    cout << endl;
	}
	return 0;
}