class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int>s;
        int l=0;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i])!=s.end()) return true;
            s.insert(nums[i]);
            if(i-l==k){
                s.erase(nums[l]);
                l++;
            }
        }
        return false;
    }
};