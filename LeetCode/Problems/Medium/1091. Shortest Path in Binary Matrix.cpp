https://leetcode.com/problems/shortest-path-in-binary-matrix/description/





class Solution {
public:
    int shortestPathBinaryMatrix(std::vector<std::vector<int>>& grid) {
        if (grid[0][0] == 1 || grid[grid.size() - 1][grid[0].size() - 1] == 1) {
            return -1;
        }
        
        int n = grid.size();
        std::vector<int> dx = {-1, 0, 1};
        std::vector<int> dy = {-1, 0, 1};
        
        std::queue<std::vector<int>> queue;
        queue.push({0, 0, 1});
        grid[0][0] = 1;
        
        while (!queue.empty()) {
            std::vector<int> curr = queue.front();
            queue.pop();
            int x = curr[0];
            int y = curr[1];
            int steps = curr[2];
            
            if (x == n - 1 && y == n - 1) {
                return steps;
            }
            
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int nx = x + dx[i];
                    int ny = y + dy[j];
                    if (nx >= 0 && nx < n && ny >= 0 && ny < n && grid[nx][ny] == 0) {
                        queue.push({nx, ny, steps + 1});
                        grid[nx][ny] = 1;
                    }
                }
            }
        }
        
        return -1;
    }
};