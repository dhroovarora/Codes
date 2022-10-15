https://practice.geeksforgeeks.org/problems/rotation4723/0




class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	   // for(int i = n-1;i>0;i--){
	   //     if(arr[i-1] > arr[i]){
	   //         return i;
	   //     }
	   // }
	   // return 0;
	   int l = 0;
	   int r = n-1;
	   while(l<=r){
	       int mid = l + (r-l)/2;
	       if(arr[mid] > arr[n-1])
	            l = mid + 1;
	       else
	            r = mid - 1;
	   }
	   return l;
	}

};