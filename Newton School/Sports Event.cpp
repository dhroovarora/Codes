https://my.newtonschool.co/playground/code/44321utjcpj1




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    if(n%4==0)
        cout << n+2;
    else if(n%4==1)
        cout << n+1;
    else if(n%4==2)
        cout << n;
    else
        cout << n+3;
    return 0;
}