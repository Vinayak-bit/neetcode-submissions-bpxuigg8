class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int tomax=nums[0],temax=0,temin=0,tomin=nums[0],total=0;
        for(int num:nums){
            temax=max(num,temax+num);
            tomax=max(temax,tomax);
        }
        for(int num:nums){
            temin=min(temin+num,num);
            tomin=min(temin,tomin);
            total+=num;
        }
        return (tomax>0)?max(tomax,total-tomin):tomax;
    }
};