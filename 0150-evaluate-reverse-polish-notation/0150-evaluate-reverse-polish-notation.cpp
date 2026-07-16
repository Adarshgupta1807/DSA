class Solution {
public:
int operation(int a,int b, string token){
    if(token=="+") return b+a;
    if(token=="*") return b*a;
    if(token=="-") return b-a;
    return b/a;
}
    int evalRPN(vector<string>& tokens) {
        //int result=0;
        stack<int> st;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                int a=st.top(); 
                st.pop();
                int b=st.top(); 
                st.pop();
                int result=operation(a,b,tokens[i]);
                st.push(result);
            }
            else{
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};