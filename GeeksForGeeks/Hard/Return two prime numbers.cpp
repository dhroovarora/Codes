https://practice.geeksforgeeks.org/problems/return-two-prime-numbers2509/0




// User function Template for C++

class Solution{
public:
    bool isPrime(int n)
    {
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
    }
    vector<int> primeDivision(int N){
        // code here
        vector<int> v;
        int q=0;
        for(int i=2;i<N/2+1;i++){
            if(isPrime(i) && isPrime(N-i)){
                v.push_back(i);
                v.push_back(N-i);
            }
        }
        return v;
    }
};