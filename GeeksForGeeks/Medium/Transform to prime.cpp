https://www.geeksforgeeks.org/problems/transform-to-prime4635/1




class Solution
{
    public:
    bool isPrime(int n)
    {
        if (n <= 1)
            return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }
    
    int minNumber(int arr[],int N)
    {
        int sum = 0;
        for(int i=0;i<N;i++)
            sum += arr[i];
        if(isPrime(sum))
            return 0;
        int i=1;
        while(true){
            sum += 1;
            if(isPrime(sum))
                return i;
            i++;
        }
    }
};