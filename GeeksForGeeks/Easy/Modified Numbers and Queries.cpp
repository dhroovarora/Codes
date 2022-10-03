https://practice.geeksforgeeks.org/problems/modified-numbers-and-queries0904/1




class Solution
{
    bool isprime(int n){
        
        for(int i = 2; i*i<=n; i++){
            if(n%i==0){
                return false;
            }
        }
        
        return true;
    }
    public:
    
    int sumOfAll(int l, int r)
    {
        int sum = 0;
//iterate l to r
        for(int i = l; i<=r; i++){
            int temp = sum;
//eg i=6 --> 2 + 3 = 5 (logic)
            for(int j = i-1; j>1; j--){
                if(i%j==0){
//isprime help to add only prime factor
                    if(isprime(j)){
                        sum += j;
                    }
                } 
            }
            //if sum == temp then i is prime so handle here
            if(sum == temp)
            sum += i;
        }
        
        
        return sum;
    }
    
};