https://www.geeksforgeeks.org/problems/sum-of-middle-elements-of-two-sorted-arrays2305/1




 class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
       vector<int>arr3;
       arr3.insert(arr3.end(),arr1.begin(),arr1.end());
       arr3.insert(arr3.end(),arr2.begin(),arr2.end());
       
       sort(arr3.begin(),arr3.end());
       int n=arr3.size()/2;
      
       return arr3[n-1]+arr3[n];;
    }
};