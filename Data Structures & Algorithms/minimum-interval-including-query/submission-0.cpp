class Solution {
public:
    vector<int> minInterval(vector<vector<int>>& intervals, vector<int>& queries) {
        vector<int>vec(10001,INT_MAX);
        for(auto it:intervals){
            int start=it[0];
            int end=it[1];
            int dur=end-start+1;
            for(;start<=end;start++){
                vec[start]=min(vec[start],dur);
            }
        }
        vector<int>ans(queries.size(),-1);
        for(int i=0;i<queries.size();i++){
            if(vec[queries[i]]!=INT_MAX)ans[i]=vec[queries[i]];
        }
        return ans;
    }
};
