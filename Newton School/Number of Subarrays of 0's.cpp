https://my.newtonschool.co/playground/code/symscf8n42id




#include <iostream>
using namespace std;

long long countSubarraysOfZeros(int n, int arr[]) {
    long long countZeros = 0;
    long long totalSubarrays = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            countZeros++;
        }else{
            totalSubarrays += (countZeros * (countZeros + 1)) / 2;
            countZeros = 0;
        }
    }

    totalSubarrays += (countZeros * (countZeros + 1)) / 2;

    return totalSubarrays;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long result = countSubarraysOfZeros(n, arr);
    cout << result << endl;

    return 0;
}