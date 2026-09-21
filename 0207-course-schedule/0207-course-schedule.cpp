class Solution {
public:
    bool isCycleDFS(int src, vector<vector<int>>& edges,vector<bool> &recPath,vector<bool> &vis){
        vis[src]=true;
        recPath[src]=true;
        for(int i=0;i<edges.size();i++){
            int v=edges[i][0];
            int u=edges[i][1];

            if(u==src){
                if(!vis[v]){
                    if(isCycleDFS(v,edges,recPath,vis)){
                        return true;
                    }
                }
                else if(recPath[v]) return true;
            }
        }
        recPath[src]=false;
            return false;
    }
    bool canFinish(int n, vector<vector<int>>& edges) {
        vector<bool> recPath(n);
        vector<bool> vis(n);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(isCycleDFS(i,edges,recPath,vis)){
                    return false;
                }
            }
        }
        return true;
    }
};