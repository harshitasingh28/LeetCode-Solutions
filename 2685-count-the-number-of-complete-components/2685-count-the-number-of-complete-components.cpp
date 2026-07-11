class Solution {
public:
    void dfs(int node, vector<int>& vis, vector<vector<int>>& adj, vector<int>& comp){
        vis[node] = 1;
        comp.push_back(node);
        for(auto it:adj[node]){
            if(vis[it] == 0){
                dfs(it, vis, adj, comp);
            }
        }
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(auto it:edges){
            int a = it[0];
            int b = it[1];
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        int cnt= 0;
        vector<int> vis(n, 0);
        for(int i = 0;i<n;i++){
           if(vis[i] == 0){
              vector<int> comp;
              dfs(i, vis, adj, comp);
              int edge = 0;
              int vertices = comp.size();
              for(auto it:comp){
                edge += adj[it].size();
              }
              edge = edge/2;
              if(edge == vertices * (vertices-1)/2){
                cnt++;
              }
           }
        }
        return cnt;
    }
};