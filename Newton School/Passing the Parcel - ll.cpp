https://my.newtonschool.co/playground/code/gng0o0kt4ize




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n,t;
    cin >> n >> t;
    int position = 1;
    int direction = 1;

    for (int i = 0; i < t; ++i) {
        position += direction;
        if (position == n+1) {
            position = n-1;
            direction = -1;
        } else if (position == 0) {
            position = 2;
            direction = 1;
        }
    }
    cout << position;
    return 0;
}