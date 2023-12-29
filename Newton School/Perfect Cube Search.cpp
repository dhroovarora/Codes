https://my.newtonschool.co/playground/code/qm04krdnq8de




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int i=1;
    while((i*i*i) <= n)
        ++i;
    cout << (i-1) * (i-1) * (i-1);
    return 0;
}