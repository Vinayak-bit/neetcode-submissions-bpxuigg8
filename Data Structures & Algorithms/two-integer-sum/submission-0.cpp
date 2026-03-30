class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>temp;
        for(int i=0;i<nums.size();i++){
            int tp=target-nums[i];
            if(temp.find(tp)!=temp.end()){
                return {temp[tp],i};
            }
            temp[nums[i]]=i;

        }
        return{};
    }
};
