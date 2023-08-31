https://my.newtonschool.co/playground/code/a4tc110m7w5x




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int min1 = 1000 , min2 = 1000;
    int max1 = -1000, max2 = -1000;
    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        if(min1 > k){
            if(min2 > k){
                min1 = min2;
                min2 = k;
            }
            else
                min1 = k;
        }
        if(max1 < k){
            if(max2 < k){
                max1 = max2;
                max2 = k;
            }
            else
                max1 = k;
        }
    }
    cout << max(min1*min2,max1*max2);
    return 0;
}