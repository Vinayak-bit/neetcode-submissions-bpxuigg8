class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        multiset<int>temp;
        set<vector<int>>ans;
        combsum(nums,temp,0,0,nums.size(),ans);
        vector<vector<int>>ans1(ans.begin(),ans.end());
        return ans1;
    }
    void combsum(vector<int>nums,multiset<int>curvec,int cursum,int i,int n,set<vector<int>>&ans){
        if(i==n ){
                vector<int>vec(curvec.begin(),curvec.end());
                ans.insert(vec);
            return;
        }
        combsum(nums,curvec,cursum,i+1,n,ans);
        curvec.insert(nums[i]);
        cursum+=nums[i];
        combsum(nums,curvec,cursum,i+1,n,ans);
    }
};
