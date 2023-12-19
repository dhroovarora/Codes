https://my.newtonschool.co/playground/code/gppdn3e7355u




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int k,i;
    cin >> k >> i;
    if(i > k){
        if((i-k)%2)
            cout << 1;
        else
            cout << 2;
    }
    else if(i < k){
        if((k-i)%2)
            cout << 2;
        else
            cout << 1;
    }
    else
        cout << 0;
    return 0;
}