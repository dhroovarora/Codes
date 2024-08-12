https://my.newtonschool.co/playground/code/lbudqcilhwvr




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        if(x < 1000){
            x += 1000;
        }
        else{
            x *= 2;
        }
        --y;
        while(y--){
            x *= 2;
        }
        cout << x << endl;
    }
    return 0;
}
