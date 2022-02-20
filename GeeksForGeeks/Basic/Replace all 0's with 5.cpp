#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    int a,b=n,c=1,sum = 0;
    while(b>0){
        a = b%10;
        if ( a == 0){
            a = 5;
        }
        else{
            a = a;
        }
        b = b/10;
        sum = sum + a*c;
        c= c*10;
    }
    return sum;
}