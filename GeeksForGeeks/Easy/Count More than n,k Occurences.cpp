https://www.geeksforgeeks.org/problems/count-element-occurences/1




class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        unordered_map<int,int> mp;
        int ans = 0;
        
        for(int i=0;i<n;i++){
            if(mp[arr[i]]>n/k) continue;
            mp[arr[i]]++;
            
            if(mp[arr[i]]>(n/k)){
               
                ans++;
            }
        }
        
        return ans;
    }
};