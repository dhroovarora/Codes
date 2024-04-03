https://my.newtonschool.co/playground/code/ldxwzh1hxh4s




#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 0, b = 1;
    int c = 2;
    int s = 0;
    while (s <= 10000) {
        s = a + b;
        if (s % n == 0) {
            cout << c;
            return 0;
        }
        c++;
        a = b;
        b = s;
    }
    cout << -1;
    return 0;
}