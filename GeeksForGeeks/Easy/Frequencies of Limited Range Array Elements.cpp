https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/1




class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
     void frequencyCount(vector<int>& arr,int n, int p)
    { 
      for(int i=0;i<n;i++)
      {
          --arr[i];
          if(arr[i]%p<n)
          {
              int original_index_to_be_incremented=arr[i]%p;
              arr[ original_index_to_be_incremented] += p;
          }
      }
      for(int i=0;i<n;i++)
          arr[i]/=p;
    }
};