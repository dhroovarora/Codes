https : // www.codechef.com/practice/course/logical-problems/DIFF800/problems/TLG?tab=statement




#include <bits/stdc++.h>
        using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;
    int a[n];
    int b[n];
    int max = INT_MIN;
    int ans = 1;
    int q = 0, w = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cin >> b[i];
        q += a[i];
        w += b[i];
        int diff = q - w;
        if (diff < 0)
        {
            if (max < (-1) * diff)
            {
                ans = 2;
                max = (-1) * (diff);
            }
        }
        else
        {
            if (max < diff)
            {
                ans = 1;
                max = diff;
            }
        }
    }
    cout << ans << ' ' << max;
    return 0;
}