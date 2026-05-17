class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,double>> mp;
        int n=speed.size();
        for(int i=0;i<n;i++){
            double t=((double)target-position[i])/speed[i];
            mp.push_back({position[i],t});
        }
        sort(mp.begin(), mp.end());
        stack<double>st;
        for(auto it:mp){
            if(st.empty())st.push(it.second);
            else{
                if(st.top()<=it.second){
                   while(!st.empty() &&st.top()<=it.second)st.pop();
                }
                st.push(it.second);
            }
        }
        return st.size();
    }
};
