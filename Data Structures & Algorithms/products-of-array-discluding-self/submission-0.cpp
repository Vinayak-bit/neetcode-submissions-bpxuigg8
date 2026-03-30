class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int c0=0;
        int product=1;
        vector<int>ans;
        for(int i:nums){
            if(i==0){
                c0++;
            }else{
                product*=i;
            }
        }
        if(c0>1){
            for(int i=0;i<nums.size();i++){
                ans.push_back(0);
            }
        }else if(c0==1){
            for(int i:nums){
                if(i==0){
                    ans.push_back(product);
                }else{
                    ans.push_back(0);
                }
            }
        }else{
            for(int i:nums){
                ans.push_back(product/i);
            }
        }
        return ans;
    }
};
