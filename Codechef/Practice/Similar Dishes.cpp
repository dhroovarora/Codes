https://www.codechef.com/problems/SIMDISH




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	   string a[4];
	   string b[4];
	   int ans = 0;
	   for(int i=0;i<4;i++){
	       string s;
	       cin >> s;
	       a[i] = s;
	   }
	   for(int i=0;i<4;i++){
	       string s;
	       cin >> s;
	       if(s == a[0] || s == a[1] || s == a[2] || s == a[3])
	            ++ans;
	   }
	   if(ans >= 2)
	        cout << "similar";
	   else
	        cout << "dissimilar";
	   cout << endl;
	}
	return 0;
}