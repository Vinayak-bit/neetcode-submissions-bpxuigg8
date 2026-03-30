class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>>ans;
        subsets(nums,nums.size(),0,temp,ans);
        return ans;
    }
    void subsets(vector<int>nums,int n,int i,vector<int>cur,vector<vector<int>>&ans){
        if(i==n){
            ans.push_back(cur);
            return;
        }
        subsets(nums,n,i+1,cur,ans);
        cur.push_back(nums[i]);
        subsets(nums,n,i+1,cur,ans);
    }
};
