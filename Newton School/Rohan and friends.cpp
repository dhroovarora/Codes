https://my.newtonschool.co/playground/code/m44s5tdzqn24




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n,s;
    cin >> n >> s;
    int sum = 0,maxi = 0;
    for(int i=0;i<n;++i){
        int a;
        cin >> a;
        maxi = max(maxi,a);
        sum += a;
    }
    sum -= maxi;
    (sum <= s) ? cout << "Yes" : cout << "No";
    return 0;
}