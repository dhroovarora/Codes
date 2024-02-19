https://my.newtonschool.co/playground/code/xqklymf03eq3




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int helper(int n){
    for(int i=2;i<n/2+1;++i){
        if(n%i==0)
            return i;
    }
    return n;
}
int main() {
	// Your code here
    int a,b;
    cin >> a >> b;
    for(;a<b+1;++a){
        int q = helper(a);
        if(q != a){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}