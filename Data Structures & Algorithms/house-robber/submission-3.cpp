class Solution {
public:
    vector<int>memo=vector<int>(100,-1);
    int dp(vector<int>& nums,int n){
        if(n<0)return 0;
        else if(memo[n]!=-1)return memo[n];
        return memo[n]=max(dp(nums,n-1),nums[n]+dp(nums,n-2));

    }

    int rob(vector<int>& nums) {
        return dp(nums,nums.size()-1);

    }
};
