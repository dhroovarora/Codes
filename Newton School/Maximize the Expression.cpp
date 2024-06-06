https : // my.newtonschool.co/playground/code/nkadlhn91n3k




#include <bits/stdc++.h> // header file includes every Standard library
        using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        int ma = 0;
        for (int j = 1; j < n; ++j)
        {
            int g = gcd(n, j);
            if ((g + j) > ma)
            {
                ma = g + j;
                ans = j;
            }
        }
        cout << ans << endl;
    }
    return 0;
}