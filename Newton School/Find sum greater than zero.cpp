https://my.newtonschool.co/playground/code/mdtziks90glz




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int sum = 0;
    for(int i=0;i<n;++i){
        int a;
        cin >> a;
        sum += a;
    }
    (sum == 0) ? cout << 2 : (sum%2) ? cout << 1 : cout << 0;
    return 0;
}