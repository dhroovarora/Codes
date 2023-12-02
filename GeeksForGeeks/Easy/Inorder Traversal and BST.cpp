https://www.geeksforgeeks.org/problems/inorder-traversal-and-bst5855/1




class Solution{
    public:
    int isRepresentingBST(int arr[], int N)
    {
        // code here
        return is_sorted(arr,arr+N);
    }
};