https://my.newtonschool.co/playground/code/sanu535xyl6y




#include <bits/stdc++.h>
using namespace std;

int repeatedStringMatch(string A, string B)
{
	int m = A.length();
	int n = B.length();

	int count;
	bool found = false;

	for (int i = 0; i < m; i++) {
		int j = i;
		int k = 0;
		count = 1;

		while (k < n && A[j] == B[k]) {
			if (k == n - 1) {
				found = true;
				break;
			}
			j = (j + 1) % m;

			if (j == 0)
				count++;

			k++;
		}
		if (found)
			return count;
	}
	return -1;
}
int main()
{
	string A,B;
    cin >> A >>B;

	cout << repeatedStringMatch(A, B);
	return 0;
}