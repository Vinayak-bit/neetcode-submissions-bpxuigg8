class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(int i:asteroids){
            if(st.empty()) st.push(i);
            else if(i<0){
                if(st.top()<0)st.push(i);
                else{
                    while(!st.empty()&&-st.top()>i&&st.top()>0)st.pop();
                    if(!st.empty()&&st.top()==(-i))st.pop();
                    else if(st.empty() || st.top()<0)st.push(i);
                }
            }
            else{
                st.push(i);
            }
        }
        vector<int>vec;
        while(!st.empty()){
            vec.push_back(st.top());
            st.pop();
        }
        reverse(vec.begin(),vec.end());
        return vec;
    }
};