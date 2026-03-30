class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(string s:tokens){
            if(s=="+"){
                int t1=st.top();
                st.pop();
                int t2=st.top();
                st.pop();
                int t3=t1+t2;
                st.push(t3);
            }
            else if(s=="-"){
                int t1=st.top();
                st.pop();
                int t2=st.top();
                st.pop();
                int t3=t2-t1;
                st.push(t3);
            }
            else if(s=="*"){
                int t1=st.top();
                st.pop();
                int t2=st.top();
                st.pop();
                int t3=t1*t2;
                st.push(t3);
            }
            else if(s=="/"){
                int t1=st.top();
                st.pop();
                int t2=st.top();
                st.pop();
                int t3=t2/t1;
                st.push(t3);
            }
            else st.push(stoi(s));
        }
        return st.top();
    }
};
