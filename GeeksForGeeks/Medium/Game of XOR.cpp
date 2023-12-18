https://www.geeksforgeeks.org/problems/game-of-xor1541/1




class Solution {
  public:
    int gameOfXor(int N , int A[]) {

        int ans=0;
        for(int i=0;i<N;i++)
            if((i+1)%2 && (N-i)%2)
                ans^=A[i];
        return ans;
    }
};