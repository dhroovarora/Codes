https://my.newtonschool.co/playground/code/raw715yya56q




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

bool isPrime(int n){
    for(int i=2;i<=sqrt(n);++i)
        if(n%i == 0)
            return 0;
    return 1;
}

int main() {
	// Your code 
    int n;
    cin >> n;
    int sum = 0;
    while(n--){
        int a;
        cin >> a;
        sum += a;
    }
    int temp = sum;
    while(!isPrime(sum)){
        ++sum;
    }
    cout << sum - temp;
    return 0;
}
