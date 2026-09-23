class Solution {
public:
    bool isCycleDFS(int src, vector<bool>& vis, vector<bool>& recPath, vector<vector<int>>& edges){
        vis[src] = true;
        recPath[src] = true;
        for(int i = 0; i < edges.size(); i++){
            int v = edges[i][0];
            int u = edges[i][1];
            if(src == u){
                if(!vis[v]){
                    if(isCycleDFS(v, vis, recPath, edges)) return true;
                } else if(recPath[v]) {
                    return true;  // back-edge -> cycle
                }
            }
        }
        recPath[src] = false;   // backtrack: current path se hata do
        return false;
    }

    void topoOrder(int src, vector<bool>& vis, stack<int>& st, vector<vector<int>>& edges){
        vis[src] = true;
        for(int i = 0; i < edges.size(); i++){
            int v = edges[i][0];
            int u = edges[i][1];
            if(src == u && !vis[v]){
                topoOrder(v, vis, st, edges);
            }
        }
        st.push(src);
    }

    vector<int> findOrder(int n, vector<vector<int>>& edges) {
        vector<bool> vis(n, false), recPath(n, false);
        vector<int> ans;

        for(int i = 0; i < n; i++){
            if(!vis[i] && isCycleDFS(i, vis, recPath, edges)){
                return ans;  // cycle -> empty order
            }
        }

        stack<int> st;
        vis.assign(n, false);
        for(int i = 0; i < n; i++){
            if(!vis[i]) topoOrder(i, vis, st, edges);
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};