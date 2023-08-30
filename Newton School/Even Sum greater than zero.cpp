https://my.newtonschool.co/playground/code/sbnjiicj3chv




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int sum = 0;
    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        sum += k;
    }
    (sum > 0) ? (sum%2) ? cout << 1 : cout << 0 : cout << 2 - sum;
    return 0;
}