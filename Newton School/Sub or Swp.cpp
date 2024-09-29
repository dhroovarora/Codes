https://my.newtonschool.co/playground/code/m7gscojf8opc




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        while(x){
            if(x > y){
                swap(x,y);
            }
            else{
                x = y - x;
                y = y - x;
            }
        }
        cout << y << endl;
    }
    return 0;
}