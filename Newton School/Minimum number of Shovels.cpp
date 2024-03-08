https://my.newtonschool.co/playground/code/1qh3j99t588l




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int k,r;
    cin >> k >> r;
    k %= 10;
    int i = 1;
    while((i*k)%10 != r && (i*k)%10 != 0)
        ++i;
    cout << i;
    return 0;
}