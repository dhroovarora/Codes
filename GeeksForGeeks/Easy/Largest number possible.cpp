https://practice.geeksforgeeks.org/problems/largest-number-possible5028/1




// User function Template for C++

class Solution{
public:
    string findLargest(int N, int S){
        // code here
        if(S==0 && N > 1)
            return "-1";
        string a;
        int p=0;
        while(S){
            if(S<9){
                a += to_string(S);
                S = 0 ;
            }
            else{
                a += '9';
                S -=9;
            }
            p++;
        }
        if( p == N)
            return a;
        else if(p < N){
            while(p<N){
                a += '0';
                p++;
            }
        }
        else{
            return "-1";
        }
        return a;
    }
};