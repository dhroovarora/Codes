https://my.newtonschool.co/playground/code/eth9alngnus7




// C++ program to find the element
// that occur only once
#include <bits/stdc++.h>
using namespace std;

int getSingle(int arr[], int n)
{
	int ones = 0, twos = 0;

	int common_bit_mask;

	for (int i = 0; i < n; i++) {
	
		twos = twos | (ones & arr[i]);
		ones = ones ^ arr[i];
		common_bit_mask = ~(ones & twos);
		ones &= common_bit_mask;
		twos &= common_bit_mask;
	}

	return ones;
}

// Driver code
int main()
{
	int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;++i)
        cin >> arr[i];
	cout << getSingle(arr, n);
	return 0;
}