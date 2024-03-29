https://www.geeksforgeeks.org/problems/split-array-largest-sum--141634/1




class Solution {
  public:
    bool isPossible(int arr[],int n, int k, int mid){
        int sum = 0;
        int part = 1;
        for(int i =0; i < n; i++){
            if(sum + arr[i] <= mid){
                sum += arr[i];
            }
            else{
                part++;
                sum = arr[i];
                
                if(arr[i] > mid || part > k){
                    return false;
                }
                
            }
        }
        
        return true;
    }
    int splitArray(int arr[] ,int N, int K) {
        
        int low = *min_element(arr, arr + N), high = accumulate(arr,arr+N,0);
        int ans = 0;
        while(low <= high){
            int mid = low + (high -low) /2;
            
            if(isPossible(arr,N,K, mid)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        
        return ans;
    }
};