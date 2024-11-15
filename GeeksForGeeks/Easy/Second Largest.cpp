https://www.geeksforgeeks.org/problems/second-largest3735/1




class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        int largest=-1;
        int secondlargest=-1;
        int i;
        for(i=0;i<n;i++)
        {
            if(arr[i]>largest)
            {
                secondlargest=largest;
                largest=arr[i];
            }
            if(largest>arr[i]&&secondlargest<arr[i])
                secondlargest=arr[i];
        }
        return secondlargest;
    }
};