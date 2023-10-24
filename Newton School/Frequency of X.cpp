https://my.newtonschool.co/playground/code/mia81klw38yl




#include <iostream>
using namespace std;

int main() {
    int N, X;
    cin >> N; // Size of the array
    int Arr[N];

    // Input array elements
    for (int i = 0; i < N; i++) {
        cin >> Arr[i];
    }

    cin >> X; // Number to find frequency for

    int frequency = 0;
    
    // Count the frequency of X in the array
    for (int i = 0; i < N; i++) {
        if (Arr[i] == X) {
            frequency++;
        }
    }

    cout << frequency << endl; // Print the frequency of X
    return 0;
}