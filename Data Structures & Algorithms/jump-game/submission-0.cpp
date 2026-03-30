class Solution {
public:
    bool canJump(vector<int>& nums) {
       return greedy(nums,0);
    }
    int greedy(vector<int>&nums,int i){
        if(i==nums.size()-1)return 1;
        int j=min((int)nums.size()-1,nums[i]+i);
        for(int s=i+1;s<=j;s++){
            if(greedy(nums,s))return 1;
        }
        return 0;
    }
};
