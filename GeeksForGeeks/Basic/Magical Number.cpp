https://practice.geeksforgeeks.org/problems/magical-number-1587115620/1?page=1&difficulty[]=-1&status[]=unsolved&category[]=Arrays&sortBy=submissions





int binarySearch(int arr[], int low, int high)
{
      //add code here.
      
      while(low<=high){
        int mid = low + (high - low)/2;
        
        if(arr[mid] == mid){
            return mid;
        }
        else if(arr[mid] < mid){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
      }
      return -1;
}