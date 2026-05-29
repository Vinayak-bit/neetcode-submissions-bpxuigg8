class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
        int n=(nums.size()/3);
        vector<int>ans;
        for(auto i:mp){
            if(i.second>n)ans.push_back(i.first);
        }
        return ans;
    }
};