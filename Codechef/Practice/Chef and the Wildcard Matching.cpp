https://www.codechef.com/practice/PCPPST01/problems/TWOSTR




#include <iostream>
using namespace std;

bool check(string a,string b){
    char c,d;
    bool flag = 0,flag2 = 0;
    for(int i=0;i<a.size();++i){
        if(a[i] != b[i]){
            if(a[i] != '?' && b[i] != '?')
                return 0;
        }
    }
    return 1;
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    string x,y;
	    cin >> x >> y;
	    (check(x,y)) ? cout << "Yes" : cout << "No";
	    cout << endl;
	}
	return 0;
}