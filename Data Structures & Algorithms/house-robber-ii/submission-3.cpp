class Solution {
public:
    vector<int>memo=vector<int>(100,-1);
    vector<int>memo2=vector<int>(100,-1);
    int dp(vector<int>& nums,int n){
        if(n<0)return 0;
        else if(memo[n]!=-1)return memo[n];
        return memo[n]=max(dp(nums,n-1),nums[n]+dp(nums,n-2));
    }
    int dp2(vector<int>& nums,int n){
        if(n<1)return 0;
        else if(memo2[n]!=-1)return memo2[n];
        return memo2[n]=max(dp2(nums,n-1),nums[n]+dp2(nums,n-2));
    }

    int rob(vector<int>& nums) {
        if(nums.size()>2){
        int one= dp(nums,nums.size()-2);
        int two=dp2(nums,nums.size()-1);
        return max(one,two);}
        else if(nums.size()==2) return max(nums[0],nums[1]);
        else return nums[0];


    }
};
