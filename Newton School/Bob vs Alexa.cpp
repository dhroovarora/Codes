https://my.newtonschool.co/playground/code/vqc134vhruw4




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    string a,b;
    cin >> a >> b;
    bool flag = 0;
    int i = 0;
    for(auto it : a){
        if(it == b[i])
            ++i;
        if(i == b.size()){
            flag = 1;
            break;
        }
    }
    (flag) ? cout << "Yes" : cout << "No"; 
    return 0;
}