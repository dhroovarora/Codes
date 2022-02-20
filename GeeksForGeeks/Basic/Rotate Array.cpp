#include<iostream>
using namespace std;

int main() {
int t;
cin >> t;
while(t--){
    int n, d;
    cin >> n >> d;
    int arr[n];
    for(int i=n-d; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n-d; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
return 0;
}