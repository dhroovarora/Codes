https://www.codechef.com/problems/MAXLCS




#include <iostream>
using namespace std;


int max (int x, int y) {
   return (x > y)? x : y;
}

int LPS(string str) {
   int n = str.size();
   int l[n][n];            

   for (int i = 0; i < n; i++)
      l[i][i] = 1;             

   for (int c=2; c<=n; c++) {
      for (int i=0; i<n-c+1; i++) {
         int j = i+c-1;
         if (str[i] == str[j] && c == 2)
            l[i][j] = 2;
         else if (str[i] == str[j])
            l[i][j] = l[i+1][j-1] + 2;
         else
            l[i][j] = max(l[i][j-1], l[i+1][j]);
      }
   }
   return l[0][n-1];
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    cout << LPS(s)/2<<endl;
	}
	return 0;
}
