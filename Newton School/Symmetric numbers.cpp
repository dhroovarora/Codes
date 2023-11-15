https://my.newtonschool.co/playground/code/ndytfxq7s4kr




#include <iostream>
#include <string>
using namespace std;
bool isSymmetric(int num) {
    string numStr = to_string(num);
    if (numStr.length() % 2 != 0)
        return false;
    int halfLength = numStr.length() / 2;
    int firstHalfSum = 0, secondHalfSum = 0;

    for (int i = 0; i < halfLength; ++i) {
        firstHalfSum += numStr[i] - '0';
        secondHalfSum += numStr[numStr.length() - 1 - i] - '0';
    }
    return firstHalfSum == secondHalfSum;
}
int countSymmetricNumbers(int n) {
    int count = 0;    
    for (int i = 1; i <= n; ++i)
        if(isSymmetric(i))
            count++;
    return count;
}

int main() {
    int n;
    cin >> n;
    int ans = countSymmetricNumbers(n);
    cout << ans;
    return 0;
}