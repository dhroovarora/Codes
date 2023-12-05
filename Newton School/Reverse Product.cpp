https://my.newtonschool.co/playground/code/1f7cx0v52ifz




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int temp = n;
    int m = 0;
    while(temp){
        m *= 10;
        m += temp%10;
        temp /= 10;
    }
    cout << n * m ;
    return 0;
}