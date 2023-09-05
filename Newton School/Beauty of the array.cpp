https://my.newtonschool.co/playground/code/v1trbcmtpvch




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int e = 0 , o = 0;
    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        (k%2) ? ++o : ++e ;
    }
    (o == e) ? cout << 2*min(o,e) : cout << 2*min(o,e) + 1;
    return 0;
}