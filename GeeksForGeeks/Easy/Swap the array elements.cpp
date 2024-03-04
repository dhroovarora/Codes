https://www.geeksforgeeks.org/problems/need-some-change/1




/*Function to swap array elements
* arr : array input
* sizeof_array : number of elements in array
*/
class Solution{
  public:
    void swapElements(int arr[], int sizeof_array){
        
        // Your code here
        for(int i=0;i<sizeof_array -2;i++)
        {
            swap(arr[i],arr[i+2]);
        }
    }
};