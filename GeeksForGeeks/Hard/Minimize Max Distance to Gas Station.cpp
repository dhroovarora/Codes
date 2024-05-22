https://www.geeksforgeeks.org/problems/minimize-max-distance-to-gas-station/1




class Solution {
    
  public:
    bool predicate(vector<int> &stations, int n, double mid, int k){
        int cnt = 0;
        for(int i = 1; i < n; i++)
        {
            cnt += ceil((stations[i] - stations[i - 1]) / mid) - 1;
        }
        return cnt <= k;
    }
    
    double findSmallestMaxDist(vector<int> &stations, int k) {
        // Code here
        double maxdist = 0, left = 0, right = 1e9;
        while(right - left > 1e-6)
        {
            double mid = (left + right) / 2;
            if(predicate(stations, stations.size(), mid, k))
            {
                maxdist = mid;
                right = mid;
            }
            else
            {
                left = mid;
            }
        }
        return maxdist;
    }
};