https://www.geeksforgeeks.org/problems/sequence-of-sequence1155/1




class Solution{
public:
    int numberSequence(int m, int n){
        if(m<n)
            return 0;
        if(n==0)
            return 1;
        return numberSequence(m/2,n-1)+numberSequence(m-1,n);
    }
};