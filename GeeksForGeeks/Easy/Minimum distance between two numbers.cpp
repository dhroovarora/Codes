https://www.geeksforgeeks.org/problems/minimum-distance-between-two-numbers/1




class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        int a2=-1,a1=-1;
        int ans = 1000000;
        for(int i=0;i<n;i++){
            if(a[i] == x){
                a1 = i;
            }
            else if(a[i] == y){
                a2 = i;
            }
            if(a2 != -1 && a1 != -1){
                if(abs(a1 - a2) < ans)
                    ans = abs(a1 -a2);
            }
        }
        if(ans == 1000000){
            return -1;
        }
        return ans;
    }
};