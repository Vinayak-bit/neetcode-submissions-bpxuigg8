class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        while(l<r){
            int mid=l+(r-l)/2;
            if(nums[mid]>nums[r])l=mid+1;
            else r=mid;
        }
        int l1=0,r1=l-1;
        while(l1>=0&&r1<l&&l1<=r1){
            int mid=l1+(r1-l1)/2;
            if(nums[mid]>target)r1=mid-1;
            else if(nums[mid]<target)l1=mid+1;
            else return mid;
        }
        int l12=l,r12=nums.size()-1;
        while(l12>=l&&r12<=(nums.size()-1)&&l12<=r12){
            int mid=l12+(r12-l12)/2;
            if(nums[mid]>target)r12=mid-1;
            else if(nums[mid]<target)l12=mid+1;
            else return mid;
        }
        return -1;
        
    }
};
