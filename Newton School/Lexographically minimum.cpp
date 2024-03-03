https://my.newtonschool.co/playground/code/jlmtqdlu6uso




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int i,j,k;
    for(i=1;i<27;i++){
        bool a = 0;
        for(j=1;j<27;j++){
            bool b = 0;
            for(k=1;k<27;k++){
                if(i+j+k==n){
                    b = 1;
                    break;
                }
            }
            if(b){
                a = 1;
                break;
            }
        }
        if(a)
            break;
    }
    cout << (char)(96 + i) << (char)(96 + j) <<  (char)(96 + k);
    return 0;
}