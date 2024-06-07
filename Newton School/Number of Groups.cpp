https : // my.newtonschool.co/playground/code/up9iaxuqueky




#include <bits/stdc++.h> // header file includes every Standard library
        using namespace std;

int main()
{
    // Your code here
    int n;
    cin >> n;
    long long c0 = 0, c1 = 0, c2 = 0;
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        if (a % 3 == 0)
            ++c0;
        else if (a % 3 == 1)
            ++c1;
        else
            ++c2;
    }
    long long ans1 = (c0 * (c0 - 1) / 2) + (c1 * c2);
    long long ans2 = (c0 * (c0 - 1) * (c0 - 2) / 6) + (c1 * (c1 - 1) * (c1 - 2) / 6) + (c2 * (c2 - 1) * (c2 - 2) / 6) + (c0 * c1 * c2);
    cout << ans1 + ans2;
    return 0;
}