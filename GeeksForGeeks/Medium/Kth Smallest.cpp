https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1




class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        
        
        priority_queue<int>pq;
        
        for(int i=0;i<arr.size();i++){
            
          if(pq.size()<k){
                
               pq.push(arr[i]);
            }
            
            else {
                
            if(pq.top()>arr[i]){
                
                
                pq.pop();
                pq.push(arr[i]);
            }
          
            }
             
   
        }
        
        
        return pq.top();

    }
};