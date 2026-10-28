class Solution {
public:
    bool checkValidString(string s) {
        stack<int> open;
        stack<int> asterik;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(ch=='('){
                open.push(i);
            }
            else if(ch=='*'){
                asterik.push(i);
            }
            else{
                if(!open.empty()){
                    open.pop();
                }
                else if(!asterik.empty()){
                    asterik.pop();
                }
                else{
                    return false;
                }
            }
        }
        while(!open.empty() && !asterik.empty()){
            int a=open.top();
            int b=asterik.top();
            open.pop();
            asterik.pop();
            if(a>b){
                return false;
            }
        }
        return open.empty();
    }
};