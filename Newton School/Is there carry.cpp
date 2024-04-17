https://my.newtonschool.co/playground/code/4hejqtowbibl




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    long long a,b;
    cin >> a >> b;
    while(a && b){
        if(a%10 + b%10 > 9){
            cout << "Yes";
            return 0;
        }
        a /= 10;
        b /= 10;
    }
    cout << "No";
    return 0;
}