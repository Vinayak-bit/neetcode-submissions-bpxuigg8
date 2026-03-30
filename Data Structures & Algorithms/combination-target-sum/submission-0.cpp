class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        multiset<int>temp;
        set<vector<int>>ans;
        combsum(nums,temp,0,target,0,nums.size(),ans);
        vector<vector<int>>ans1(ans.begin(),ans.end());
        return ans1;
    }
    void combsum(vector<int>nums,multiset<int>curvec,int cursum,int target,int i,int n,set<vector<int>>&ans){
        if(i==n || cursum>=target){
            if(cursum==target){
                vector<int>vec(curvec.begin(),curvec.end());
                ans.insert(vec);
            }
            return;
        }
        combsum(nums,curvec,cursum,target,i+1,n,ans);
        int num=target/nums[i];
        for(int k=0;k<=num;k++){
            curvec.insert(nums[i]);
            cursum+=nums[i];
            combsum(nums,curvec,cursum,target,i+1,n,ans);
        }
    }
};
