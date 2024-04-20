https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1




class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int> ans;
        int i=0,j=0,k=-1;
        while(i<n && j<m){
            if(arr1[i] < arr2[j]){
                ans.push_back(arr1[i]);
                ++i;
            }
            else if(arr1[i] > arr2[j]){
                ans.push_back(arr2[j]);
                ++j;
            }
            else{
                ans.push_back(arr1[i]);
                ++i;
                ++j;
            }
            ++k;
            while(i<n && ans[k] == arr1[i])
                ++i;
            while(j<m && ans[k] == arr2[j])
                ++j;
        }
        while(i<n){
            ans.push_back(arr1[i]);
            while(i<n-1 && arr1[i] == arr1[i+1])
                ++i;
            ++i;
        }
        while(j<m){
            ans.push_back(arr2[j]);
            while(j<m-1 && arr2[j] == arr2[j+1])
                ++j;
            ++j;
        }
        return ans;
    }
};