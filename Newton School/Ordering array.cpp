https://my.newtonschool.co/playground/code/roz13cviws6f




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::unordered_map<int, int> occ;

    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
        ++occ[numbers[i]];
    }

    if (occ.size() >= 3)
        std::cout << "No";
    else if(occ.size()==1)
        std::cout << "Yes";
    else {
        auto it = occ.begin();
        int firstValue = it->second;
        ++it;
        int secondValue = it->second;

        if (abs(firstValue - secondValue) <= 1) {
            std::cout << "Yes";
        } else {
            std::cout << "No";
        }
    }

    return 0;
}