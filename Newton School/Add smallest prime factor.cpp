https://my.newtonschool.co/playground/code/e93gp5h7bwa7




#include <iostream>
#include <vector>
using namespace std;


int main() {
    
    int T;
    cin >> T;
    
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        int ans = 0;
        if(X%2){
            for(int i=3;i<=X;i+=2){
                if(X%i==0){
                    X += i;
                }
            }
            ++ans;
        }
        cout << ans + (Y-X+1)/2 << endl;
    }

    return 0;
}