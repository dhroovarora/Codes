https://my.newtonschool.co/playground/code/pheyie8e8igy




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        int totalStudents = X * Y;
        if (Z > totalStudents / 2) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}