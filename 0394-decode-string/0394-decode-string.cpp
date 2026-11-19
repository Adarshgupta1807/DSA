class Solution {
public:
    string decodeString(string s) {
        stack<string> st1;
        stack<int> st2;
        string curr="";
        int num=0;
        for(char ch:s){
            if(isdigit(ch)){
                num=num*10+(ch-'0');
            }
            else if(ch=='['){
                st1.push(curr);
                st2.push(num);
                num=0;
                curr="";
            }
            else if(ch==']'){
                string temp=curr;
                curr=st1.top();
                st1.pop();
                int repeat=st2.top();
                st2.pop();
                while(repeat--) curr+=temp;
            }
            else{
                curr+=ch;
            }
        }
        return curr;
    }
};