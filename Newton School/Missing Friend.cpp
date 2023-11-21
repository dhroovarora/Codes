https://my.newtonschool.co/playground/code/s9fdn8k567ns




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int a[n] = {0};
    for(int i=0;i<n-1;++i){
        int b;
        cin >> b;
        ++a[b-1];
    }
    for(int i=0;i<n;++i){
        if(a[i] == 0){
            cout << 2*(i+1);
        }
    }
    return 0;
}