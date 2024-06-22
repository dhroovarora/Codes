https: // my.newtonschool.co/playground/code/v65h4qk9ei3b




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int x,y,z;
    cin >> x >> y >> z;
    (x >= y) ? cout << "PIZZA" : (x >= z) ? cout << "BURGER" : cout << "NOTHING";
    return 0;
}