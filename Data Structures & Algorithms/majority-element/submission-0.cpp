class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
        int ans;
        int freq=-1;
        for(auto it:mp){
            if(freq==-1){
                ans=it.first;
                freq=it.second;
            }
            if(freq<it.second){
                ans=it.first;
                freq=it.second;
            }
        }
        return ans;
    }
};