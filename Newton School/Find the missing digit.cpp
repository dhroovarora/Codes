https://my.newtonschool.co/playground/code/92lticbvq19q




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    string s;
    cin >> s;
    unordered_map<char,int> m;
    char a = '0';
    while(a!='9'){
        ++m[a];
        ++a;
    }
    ++m[a];
    for(auto it :s){
        --m[it];
    }
    for(auto it : m){
        if(it.second == 1)
            cout << it.first;
    }
    return 0;
}