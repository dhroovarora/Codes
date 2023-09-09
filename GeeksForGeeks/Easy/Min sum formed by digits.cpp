https://practice.geeksforgeeks.org/problems/min-sum-formed-by-digits3551/1




class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
        // Your code goes here
        sort(arr,arr+n);
        long long int a = 0;
        long long int b = 0;
        for(int i=0;i<n;i++){
            if(i%2)
                a = a*10 + arr[i];
            else
                b = b*10 + arr[i];
        }
        return a + b;
    }
};