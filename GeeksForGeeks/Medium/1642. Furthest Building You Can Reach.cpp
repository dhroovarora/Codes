https://leetcode.com/problems/furthest-building-you-can-reach/description/?envType=daily-question&envId=2024-02-17




class Solution{
    public:
    bool isMaxHeap(int arr[], int n)
    {
        // Your code goes here
        queue<int> q;
        q.push(arr[0]);
        int i=1;
        while(!q.empty() && i<n){
            int a = 0;
            int f = q.front();
            q.pop();
            while(i<n && a<2){
                if(f<arr[i])
                    return 0;
                q.push(arr[i]);
                ++i;
                ++a;
            }
        }
        return 1;
    }
};