https://my.newtonschool.co/playground/code/gelqf3uq529a




    #include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;++i)
        cin >> arr[i];
    int k;
    cin >> k;
    cout << max(0,(*max_element(arr,arr+n) - k) - (*min_element(arr,arr+n) + k));
    return 0;
}