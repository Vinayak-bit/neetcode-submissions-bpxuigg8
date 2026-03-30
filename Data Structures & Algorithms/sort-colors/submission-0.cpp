class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0;
        int r=0;
        int n=0;
        while(l<nums.size()){
            r=l;
             while(r<nums.size()){
                if(nums[r]==n){
                    int temp=nums[r];
                    nums[r]=nums[l];
                    nums[l]=temp;
                    l++;
                }
                r++;
             }
             n++;
        }
    }
};