https://my.newtonschool.co/playground/code/k0z7we730ju7




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    if(n==1)
        cout << 2;
    else if(n%3==0){
        cout << n/3;
    }
    else{
        cout << n/3 + 1;
    }
    return 0;
}