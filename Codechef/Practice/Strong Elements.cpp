https://www.codechef.com/practice/course/number-theory/INTNT01/problems/STRNG?tab=statement




#include<bits/stdc++.h>

using namespace std;


#define ll long long

void sol(void)
{
    ll n; cin >> n;
    ll v[n];
    for (ll i = 0; i < n; ++i)
    {
        cin >> v[i];        
    }
    if(n==1) {
        cout<<1<<"\n";
        return;
    }
    std::vector<ll>  pre(n), suf(n);
    pre[0]=v[0], suf[n-1]=v[n-1];
    for(int i=1;i<n;i++){
        pre[i] = __gcd(pre[i-1], v[i]);
    }
    for(int i=n-2;i>=0;i--){
        suf[i] = __gcd(suf[i+1], v[i]);
    }
    ll cnt = 0;
    for (int i = 0; i <= n-1; ++i)
    {
        if(i==0)
        {
            if (suf[i+1] != 1)
            {
                cnt++;
                continue;
            }
        }
        if(i==n-1)
        {
            if (pre[i-1] != 1)
            {
                cnt++;
                continue;
            }
        }
        if (__gcd(pre[i-1],suf[i+1]) != 1) cnt++;
    }
    cout << cnt << endl;
    
    return;
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int test;
    cin >> test;
    while (test--)
        sol();
}