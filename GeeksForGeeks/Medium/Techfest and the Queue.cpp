https://www.geeksforgeeks.org/problems/techfest-and-the-queue1044/1




class Solution {
public:
	int sumOfPowersOfPrime(int n){
        int count = 0;
        
        while(n%2==0){
            count++;
            n/=2;
        }
        
        for(int i = 3; i<=sqrt(n);i++){
            while(n%i==0){
                count++;
                n/=i;
            }
        }
        
        if(n>2){
            count++;
        }
        
        return count;
    }
	int sumOfPowers(int a, int b){
	    // Code here
	    int ans = 0;
	    for(int i = a; i<=b;i++){
	        ans+=sumOfPowersOfPrime(i);
	    }
	    return ans;
	}

};