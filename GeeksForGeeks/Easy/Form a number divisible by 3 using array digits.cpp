https://practice.geeksforgeeks.org/problems/form-a-number-divisible-by-3-using-array-digits0717/1




class Solution {
  public:
    int isPossible(int N, int arr[]) {
        // code here
        int sum = 0;
        for(int i=0;i<N;++i){
            int a = arr[i];
            while(a){
                sum += a%10;
                a /= 10;
            }
        }
        if(sum%3)
            return 0;
        return 1;
    }
};