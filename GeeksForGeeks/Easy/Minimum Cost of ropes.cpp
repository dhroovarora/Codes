https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1?page=1&status[]=solved&category[]=Queue&sortBy=submissions




{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
        priority_queue<long long> pq;
        long long ans = 0;
        for(long long i=0; i<n; i++){
            pq.push(- arr[i]);
        }
        for(long long i=0; i<n-1; i++){
            long long top = - (pq.top());
            pq.pop();
            long long top1 = - (pq.top());
            pq.pop();
            pq.push(- (top + top1));
            ans += top + top1;
        }
        return ans;
    }
};