https://my.newtonschool.co/playground/code/3blxq33hxyer




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n,k;
    cin >> n >> k;
    int sum = 0;
    for(int i=0;i<n;++i){
        int a;
        cin >> a;
        sum += a;
    }
    (sum < n || (sum%n && k==0)) ? cout << "No" : cout << "Yes";
    return 0;
}