https://practice.geeksforgeeks.org/problems/minimize-sum-of-alternate-product2033/1?page=1&difficulty[]=-1&status[]=unsolved&category[]=Arrays&sortBy=submissions




long long altProduct(long long a[], long long n)
{
    // Your code goes here
    long long ans = 0;
    sort(a,a+n);
    for(int i=0;i<n/2;++i)
        ans += (a[i]*a[n-i-1]);
    return ans;
}