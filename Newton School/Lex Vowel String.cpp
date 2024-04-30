https://my.newtonschool.co/playground/code/efy06xdi7ges




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    string s;
    cin >> s;
    int a=0,e=0,i=0,o=0,u=0;
    for(auto p :s){
        if(p == 'a')
            ++a;
        if(p == 'e')
            ++e;
        if(p == 'i')
            ++i;
        if(p == 'o')
            ++o;
        if(p == 'u')
            ++u;
    }
    while(a--)
        cout << 'a';
    while(e--)
        cout << 'e';
    while(i--)
        cout << 'i';
    while(o--)
        cout << 'o';
    while(u--)
        cout << 'u';
    return 0;
}