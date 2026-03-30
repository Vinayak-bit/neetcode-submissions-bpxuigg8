class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int tot=0;
        xori(nums,0,0,nums.size(),tot);
        return tot;
    }
    void xori(vector<int>nums,int i,int xori1,int n,int &tot){
        if(i==n){
            tot+=xori1;
            return ;
        }
        xori(nums,i+1,xori1,n,tot);
        xori1^=nums[i];
        xori(nums,i+1,xori1,n,tot);
    }
};