https://my.newtonschool.co/playground/code/nhs06xvig320




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int o = 0,e = 0;
    while(n){
        if((n%10)%2)
            ++o;
        else
            ++e;
        n /= 10;
    }
    cout << min(o,e);
    return 0;
}