https://my.newtonschool.co/playground/code/1djvcr20xxcl




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int i=0,a,ans=0;
    while(i<n/2){
        ++i;
        if((n-i)%i==0)
            ++ans;
    }
    cout << ans;
    return 0;
}