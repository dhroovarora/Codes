https://my.newtonschool.co/playground/code/fcer6zklo3qh




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int a,b;
    cin >> a >> b;
    int i = 0;
    bool flag = 0;
    while(i<a){
        if((b+i)%(a+i) == 0){
            flag = 1;
            break;
        }
        ++i;
    }
    if(flag)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}