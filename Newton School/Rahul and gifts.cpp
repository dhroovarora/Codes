https://my.newtonschool.co/playground/code/wyh3t3na87xu




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int k,l;
    cin >> k >> l;
    string s;
    cin >> s;
    int x = 0;
    int y = 0;
    for(auto i : s){
        if(i == 'L')
            --x;
        else if(i == 'R')
            ++x;
        else if(i == 'D')
            --y;
        else
            ++y;
        if(x == k && y == l){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}