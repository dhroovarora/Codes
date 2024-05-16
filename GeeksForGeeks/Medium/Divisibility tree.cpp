https://www.geeksforgeeks.org/problems/divisibility-tree1902/1




class Solution {
public:
 int dfs(std::unordered_map<int, std::vector<int>>& mp, int u, int parent, int& ans) {
        int count = 1;
        for (auto& i : mp[u]) {
            if (i != parent) { 
                int subtree = dfs(mp, i, u, ans); 
                if (subtree % 2 == 0) { 
                    ans++;
                } else {
                    count++; 
                }
            }
        }
        return count;
    }

    int minimumEdgeRemove(int n, std::vector<std::vector<int>>& edges) {
        std::unordered_map<int, std::vector<int>> mp; 
        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0]; 
            int v = edges[i][1]; 
            mp[v].push_back(u); 
            mp[u].push_back(v); 
        }
        int ans = 0; 
        dfs(mp, 1, -1, ans);
        return ans; 
	}
};