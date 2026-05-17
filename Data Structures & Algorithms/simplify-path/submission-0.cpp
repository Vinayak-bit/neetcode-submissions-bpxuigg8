class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;
        int n=path.size();
        int i=0;
        string temp="";

        while(i<n){
            if(path[i]=='/'){
                i++;
                if(temp!=""){
                if(temp==".."){
                    if(!st.empty())st.pop();
                }
                else if(temp==".") {temp="";continue;}
                else {
                    st.push(temp);
                }
                temp="";
            }
                continue;}
            else{
                temp+=path[i];
                i++;
            }
            }
            if(temp!=""){
                if(temp==".."){
                    if(!st.empty())st.pop();
                }
                else if(temp==".") {temp="";}
                else {
                    st.push(temp);
                }}
        string ans="";
        while(!st.empty()){
            ans=st.top()+ans;
            ans="/"+ans;
            st.pop();
        }
        if(ans=="")ans="/";
        return ans;
        }
};