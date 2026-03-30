class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        vector<int>ans;
        for(int i:nums){
            if(!mp.count(i)){
                mp[i]=1;
            }else{
                mp[i]++;
            }
        }
        vector<pair<int,int>>mp1(mp.begin(),mp.end());
        sort(mp1.begin(),mp1.end(),[](const auto& a,const auto& b){
            return a.second>b.second;
        });
        for(int i=0;i<k;i++){
            ans.push_back(mp1[i].first);
        }
        return ans;

    }
};
