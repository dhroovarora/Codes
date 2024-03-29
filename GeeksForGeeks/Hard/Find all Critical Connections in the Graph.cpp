https://www.geeksforgeeks.org/problems/critical-connections/1




class Solution {
public:
    int dfs(vector<int> graph[], int i, vector<int>& rank, vector<vector<int>>& res, int prev_rank, int n) {
        rank[i] = prev_rank + 1;
        int t = INT_MAX;
        for(const auto& nbr: graph[i]) {
            if(rank[nbr] == -1) {
                int k = dfs(graph, nbr, rank, res, prev_rank+1, n);
                if( k > rank[i])
                    res.push_back({min(i, nbr), max(i,nbr)});
                t = min(t, k);
                
            } else if(rank[nbr] == n+1)
                continue;
            else if(rank[nbr] != prev_rank)
                t = min(t, rank[nbr]);
        }
        rank[i] = n + 1;
        return t;
    }
    vector<vector<int>>criticalConnections(int v, vector<int> adj[]){
        vector<vector<int>> res;
        vector<int> rank(v, -1);
        int k = dfs(adj, 0, rank, res, 0, v);
        sort(res.begin(), res.end());
        return res;
    }
};