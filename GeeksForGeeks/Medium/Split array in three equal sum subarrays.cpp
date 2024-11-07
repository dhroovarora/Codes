https://www.geeksforgeeks.org/problems/split-array-in-three-equal-sum-subarrays/1




class Solution {
  public:
    // Function to determine if array arr can be split into three equal sum sets.
    vector<int> findSplit(vector<int>& arr) {
        // code here
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        
        if(sum%3!=0) return {-1,-1};
        
        int temp=0;
        int count=0;
        
        vector<int>index(2,-1);
        
        for(int i=0;i<arr.size();i++){
            
            temp+=arr[i];
    
            if(count ==0 && temp==sum/3){
                count++;
                temp=0;
                index[0]=i;
            }
            
            if(count==1 && temp==sum/3 && i<arr.size()-1){
                index[1]=i;
                return index;
            }
        }
        
        return {-1,-1};
        
    }
};