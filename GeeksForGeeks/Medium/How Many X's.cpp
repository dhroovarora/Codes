https://www.geeksforgeeks.org/problems/how-many-xs4514/1




class Solution {
  public:
    int countX(int L, int R, int X) {
        // code here
        int q=0;
        for(int i=L+1;i<R;i++){
            int j = i;
            while(j>0){
                if(j%10==X){
                    q++;
                }
                j = j/10;
            }
        }
        return q;
    }
};