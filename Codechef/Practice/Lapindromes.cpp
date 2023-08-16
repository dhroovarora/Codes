https://www.codechef.com/problems/LAPIN




#include <iostream>
using namespace std;

bool helper(string s,int n){
    int a[26] = {0};
    for(int i=0;i<n/2;i++)
        ++a[s[i] - 'a'];
    int i = n/2;
    if(n%2)
        ++i;
    for(;i<n;i++)
        --a[s[i] - 'a'];
    for(int i=0;i<26;i++)
        if(a[i] != 0)
            return 0;
    return 1;
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    int n = s.size();
	    helper(s,n) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}
