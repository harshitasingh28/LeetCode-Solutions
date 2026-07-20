class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        if(k==0){
            return grid;
        }
        vector<vector<int>> ans(m, vector<int>(n, -1));
        while(k--){
            for(int i = 0;i<m;i++){
            for(int j = 0;j<n-1;j++){
                ans[i][j+1] = grid[i][j];
            }
        }
        for(int i = 0;i<m-1;i++){
            ans[i+1][0] = grid[i][n-1];
        }
        ans[0][0] = grid[m-1][n-1];
        grid = ans;
        }
        return ans;
    }
};