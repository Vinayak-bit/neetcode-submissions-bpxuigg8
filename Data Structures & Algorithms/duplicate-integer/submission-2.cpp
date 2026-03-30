class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>temp;
        for(int i:nums){
            temp.insert(i);
        }
        if(temp.size()==nums.size())return false;
        return true;
        
    }
};