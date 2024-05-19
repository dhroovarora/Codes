https://www.geeksforgeeks.org/problems/find-the-closest-number5513/1




class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        // Complete the function
        int i = 0;
        int j = n-1;
        if(k < arr[0])
            return arr[0];
        if(k > arr[n-1])
            return arr[n-1];
        while(i<=j){
            int mid = i + (j-i)/2;
            if(arr[mid] == k)
                return arr[mid];
            else if(arr[mid] < k)
                i = ++mid;
            else
                j = --mid;
        }
        if( abs(arr[i] - k) >  abs(arr[j] - k))
            return arr[j];
        return arr[i];
    }
};