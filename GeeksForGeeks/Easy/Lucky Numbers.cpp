https://practice.geeksforgeeks.org/problems/lucky-numbers2911/1




//User-function template for C++

// Complete the function
// n: Input n
// Return True if the given number is a lucky number else return False

class Solution{
public:
    int a=2;
    bool isLucky(int n) {
        // code here
        
        if(n%a==0){
            return 0;
        }
        else if(a>n){
            return 1;
        }
        else{
            int b = n - (n/a);
            a++;
            return isLucky(b);
        }
        
    }
};