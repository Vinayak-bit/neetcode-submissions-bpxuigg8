class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        ans.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
                if(ans[ans.size()-1][1]<intervals[i][0])ans.push_back(intervals[i]);
                else{
                    int n=ans.size()-1;
                    ans[n][0]=min(ans[n][0],intervals[i][0]);
                    ans[n][1]=max(ans[n][1],intervals[i][1]);
                }
            
        }
        return ans;
    }
};
