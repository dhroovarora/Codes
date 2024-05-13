https://my.newtonschool.co/playground/code/rqm48ocj2rvx




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

bool pretty(long long s){
    int a = s%10;
    s /= 10;
    while(s){
        int b = s%10;
        s/=10;
        if(abs(a-b) != 1)
            return 0;
        a = b;
    }
    return 1;
}
int main() {
	// Your code here
    long long s;
    cin >> s;
    while(true){
        if(pretty(s)){
            cout << s;
            break;
        }
        --s;
    }
    return 0;
}