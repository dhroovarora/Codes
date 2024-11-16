https://www.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1




class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
       
        int n=arr.size();
     
        vector<int>v(n,0);
        int j=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                v[j]=arr[i];
                j++;
            }
        }
        arr=v;
        
    }
};