https://my.newtonschool.co/playground/code/l72sfoagditi




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int a,b;
    cin >> a >> b;
    int c = a & b;
    if(a==b)
        cout << 0;
    else if(a==c || b==c)
        cout << 1;
    else
        cout << 2;
    return 0;
}