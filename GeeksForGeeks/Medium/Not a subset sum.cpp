https://www.geeksforgeeks.org/problems/smallest-number-subset1220/1




class Solution {
  public:
    long long findSmallest(vector<int> &arr) {
        int sum=0;
        int n=arr.size();
        sum+=arr[0];
        if(arr[0]!=1){
            return 1;
        }
        for(int i=1;i<n;i++){
            if(sum+1 >= arr[i]){
                sum+=arr[i];
            }else{
               return sum+1;
            }
    
        }
        return sum+1;
    }
};