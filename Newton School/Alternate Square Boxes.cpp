https://my.newtonschool.co/playground/code/9kq8uibk2fca




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    bool a = 0;
    for(int i=0;i<2*n;++i){
        string r = "";
        for(int j=0;j<2*n;++j){
            if((i/2 + j/2)%2==0)
                r += '*';
            else
                r += '.';
        }
        cout << r << endl;
    }
    return 0;
}