class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxs=nums[0],temp=0;
        for(int n:nums){
            if(temp<0)temp=0;
            temp+=n;
            maxs=max(maxs,temp);
        }
        return maxs;
    }
};
