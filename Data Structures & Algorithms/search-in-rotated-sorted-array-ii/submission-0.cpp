class Solution {
public:
    bool search(vector<int>& nums, int target) {
        set<int>s;
        for(int i:nums){
            s.insert(i);
        }
        vector<int>nums1(s.begin(),s.end());
        int l=0;
        int r=nums1.size()-1;
        while(l<r){
            int mid=l+(r-l)/2;
            if(nums1[mid]>nums1[r])l=mid+1;
            else r=mid;
        }
        int l1=0,r1=l-1;
        while(l1>=0&&r1<l&&l1<=r1){
            int mid=l1+(r1-l1)/2;
            if(nums1[mid]>target)r1=mid-1;
            else if(nums1[mid]<target)l1=mid+1;
            else return true;
        }
        int l12=l,r12=nums1.size()-1;
        while(l12>=l&&r12<=(nums1.size()-1)&&l12<=r12){
            int mid=l12+(r12-l12)/2;
            if(nums1[mid]>target)r12=mid-1;
            else if(nums1[mid]<target)l12=mid+1;
            else return true;
        }
        return false;
        
    }
};