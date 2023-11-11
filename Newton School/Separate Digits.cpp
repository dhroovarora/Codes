https://my.newtonschool.co/playground/code/g5enwgnw1gjt




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void helper(int a){
    if(a>9)
        helper(a/10);
    cout << a%10 << ' ';
}
int main() {
	// Your code here
    int n;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        helper(a);
    }
    return 0;
}