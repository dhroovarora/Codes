https://my.newtonschool.co/playground/code/dtle18uqkiim




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int xx;
    std::cin >> xx;
    std::cin.ignore();
    std::string l;
    std::getline(std::cin, l);

    int c = 0, n = 0;
    for (char x : l) {
        if (x == 'C') {
            c += 2;
        } else if (x == 'N') {
            n += 2;
        }
    }

    if (c > n) {
        std::cout << 60 * xx ;
    } else if (c < n) {
        std::cout << 40 * xx ;
    } else {
        std::cout << 55 * xx ;
    }

    return 0;
}