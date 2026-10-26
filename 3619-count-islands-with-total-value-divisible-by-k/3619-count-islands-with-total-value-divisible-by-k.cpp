class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& vis, int k, long long& sum){
        int n = grid.size();
        int m = grid[0].size();
        if(i<0 || j<0 || i>=n || j>=m || vis[i][j] || grid[i][j] == 0){
            return;
        }

        vis[i][j] = 1;
        sum += grid[i][j];

        dfs(i+1, j, grid, vis, k, sum);
        dfs(i-1, j, grid, vis, k, sum);
        dfs(i, j+1, grid, vis, k, sum);
        dfs(i, j-1, grid, vis, k, sum);
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int cnt = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));

        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                long long sum = 0;
                if(!vis[i][j] && grid[i][j] != 0){
                    dfs(i, j, grid, vis, k, sum);

                    if(sum % k == 0){
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};