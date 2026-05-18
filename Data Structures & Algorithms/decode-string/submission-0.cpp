class Solution {
public:
    string decodeString(string s) {
        stack<char>st;
        for(char c:s){
            if(c==']'){
                string temp="";
                while(st.top()!='['){
                    temp=st.top()+temp;
                    st.pop();
                }
                st.pop();
                string dig="";
                while(!st.empty()&&isdigit(st.top())){
                    dig=st.top()+dig;
                    st.pop();
                }
                int rep=stoi(dig);
                for(int i=0;i<rep;i++){
                    for(char c2:temp){
                        st.push(c2);
                    }
                }
            }
            else{
                st.push(c);
            }
        }
        string ans="";
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};