class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>st;
        int n=temperatures.size();
        vector<int>vec(n,0);
        int i=0;
        while(i<n){
            if(st.empty()){st.push(i);i++;}
            else{
                if(temperatures[st.top()]<temperatures[i]){
                    while(!st.empty() && temperatures[st.top()]<temperatures[i]){
                        vec[st.top()]=i-st.top();
                        st.pop();
                    }

                }
                st.push(i);
                i++;
            }
        }
        return vec;
    }
};
