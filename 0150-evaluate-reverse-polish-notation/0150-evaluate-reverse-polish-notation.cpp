class Solution {
public:
    int operation(int a,int b,const string& ch){
        if(ch=="+") return a+b;
        else if(ch=="-") return b-a;
        else if(ch=="*") return a*b;
        else return b/a;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(const string& ch:tokens){
            if(ch=="+" || ch=="-" || ch=="*" || ch=="/"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int result=operation(a,b,ch);
                st.push(result);
            }
            else st.push(stoi(ch));
        }
        return st.top();
    }
};