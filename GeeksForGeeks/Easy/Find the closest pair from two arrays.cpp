https://practice.geeksforgeeks.org/problems/find-the-closest-pair-from-two-arrays4215/1




//User function teamplate for C++

class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        //code here
        int i=0;
        int j=m-1;
        int ans1 = -1;
        int ans2 = -1;
        int val = INT_MAX;
        vector<int> ans;
        
        while(i<n && j>=0)
        {
            int sum =arr[i]+brr[j];
            int check = x - sum;
            int temp = abs(x-sum);
            
            if(val > temp)
            {   
                    val = temp;
                    ans1 = arr[i];
                    ans2 = brr[j];
            }
                
            if(check < 0)
            {
               j--;
            }
            else
            {
                i++;
            }
        }
        // cout<<ans1<<" "<<ans2<<endl;
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
    }
};