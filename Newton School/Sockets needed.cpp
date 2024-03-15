https://my.newtonschool.co/playground/code/joss7fpxho8y




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int a,b;
    cin >> a >> b;
    int ans = 0;
    int temp = 1;
    while(temp < b){
        ++ans;
        temp += (a-1);
    }
    cout << ans;
    return 0;
}