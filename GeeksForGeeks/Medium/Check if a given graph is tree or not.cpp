https://www.geeksforgeeks.org/problems/is-it-a-tree/1




class Solution {
    bool dfs(int node, vector<int> adjList[] ,int vis[] ,int parent){
        vis[node] = 1;
        for(auto it : adjList[node]){
            if(!vis[it]){
                if(dfs(it ,adjList ,vis ,node) == true){
                    return true;
                }
            }
            else if(it != parent){
                return true;
            }
        }
        return false;
    }
    public:
    int isTree(int n, int m, vector<vector<int>> &adj) {
        // code here
        vector<int> adjList[n];
        for(auto it : adj){
            adjList[it[0]].push_back(it[1]);
            adjList[it[1]].push_back(it[0]);
        }
        int vis[n] = {0};
        if(dfs(0 ,adjList ,vis ,-1) == true){
            return false;
        }
        for(int i=0;i<n;i++){
            if(!vis[i]){
                return false;
            }
        }
        return true;
    }
};