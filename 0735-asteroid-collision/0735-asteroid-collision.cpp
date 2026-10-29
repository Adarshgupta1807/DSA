class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        stack<int> st;
        for(int a: nums){
            while(!st.empty() && a<0 && st.top()>0){
                if(st.top()>abs(a)){
                    a=0;
                    //break;
                }
                else if(st.top()==abs(a)){
                    a=0;
                    st.pop();
                }
                else{
                    st.pop();
                }
            }
            if(a!=0){
                st.push(a);
            }
        }
        vector<int> ans(st.size());
        for(int i=ans.size()-1;i>=0;i--){
            int b=st.top();
            ans[i]=b;
            st.pop();
        }
        return ans;

    }
};