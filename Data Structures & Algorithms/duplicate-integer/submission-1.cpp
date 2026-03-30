class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        vector<int>temp;
        if(nums.size()>1){
        temp.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<temp.size();j++){
                if(nums[i]==temp[j]){
                    return true;
                }
            }
            temp.push_back(nums[i]);
        }}
        return false;
    }
};