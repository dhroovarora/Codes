https://www.codechef.com/problems/GOODWEAT




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c,d,e,f,g;
	    cin >> a >> b >> c >> d >> e >> f >> g;
	    int count = 0 ;
	    if(a==1)
	        count++;
	    if(b==1)
	        count++;
	    if(c==1)
	        count++;
	    if(d==1)
	        count++;
	    if(e==1)
	        count++;
	    if(f==1)
	        count++;
	    if(g==1)
	        count++;
	    (count >= 4) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}