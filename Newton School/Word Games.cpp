https://my.newtonschool.co/playground/code/472e7zvq63r0




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    string a;
    cin >> a;
    string ans = "";
    for(int i=0;i<n-1;++i){
        if((a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'y') && (a[i+1] == 'a' || a[i+1] == 'e' || a[i+1] == 'i' || a[i+1] == 'o' || a[i+1] == 'u' || a[i+1] == 'y'))
            continue;
        else
            cout << a[i];
    }
    cout << a[n-1];
    return 0;
}