class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int curmax,tmax;
        if(nums.size()!=0){
        tmax=1,curmax=1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]==1){
                curmax++;
            }
            else if(nums[i]-nums[i-1]==0){
                continue;
            }
            else{
                tmax=max(tmax,curmax);
                curmax=1;
            }
        }}else{
        tmax=0,curmax=0;
        }
        return max(curmax,tmax);
    }
};
