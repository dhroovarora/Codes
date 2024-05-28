https://my.newtonschool.co/playground/code/1d2w9ucv24f5




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    long long n;
    cin >> n;
    long long i=1;
    while(n >= (i*i)){
        n -= (i*i);
        ++i;
    }
    cout << i - 1;
    return 0;
}